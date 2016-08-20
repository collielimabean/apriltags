#pragma once

#include <opencv2/core.hpp>
#include <vector>
#include <array>
#include "Point2D"

namespace AprilTags
{
    struct DetectorParams
    {
        // detection of quads can be done on a lower-resolution image,
        // improving speed at a cost of pose accuracy and a slight
        // decrease in detection rate. Decoding the binary payload is
        // still done at full resolution. .
        double quad_decimate;

        // What Gaussian blur should be applied to the segmented image
        // (used for quad detection?)  Parameter is the standard deviation
        // in pixels.  Very noisy images benefit from non-zero values
        // (e.g. 0.8).
        double quad_sigma;

        // When non-zero, the edges of the each quad are adjusted to "snap
        // to" strong gradients nearby. This is useful when decimation is
        // employed, as it can increase the quality of the initial quad
        // estimate substantially. Generally recommended to be on (1).
        //
        // Very computationally inexpensive. Option is ignored if
        // quad_decimate = 1.
        bool refine_edges;

        // when non-zero, detections are refined in a way intended to
        // increase the number of detected tags. Especially effective for
        // very small tags near the resolution threshold (e.g. 10px on a
        // side).
        bool refine_decode;

        // when non-zero, detections are refined in a way intended to
        // increase the accuracy of the extracted pose. This is done by
        // maximizing the contrast around the black and white border of
        // the tag. This generally increases the number of successfully
        // detected tags, though not as effectively (or quickly) as
        // refine_decode.
        //
        // This option must be enabled in order for "goodness" to be
        // computed.
        bool refine_pose;
    };

    struct QuadThreshParams
    {
        // reject quads containing too few pixels
        bool min_cluster_pixels;

        // how many corner candidates to consider when segmenting a group
        // of pixels into a quad.
        int max_nmaxima;

        // Reject quads where pairs of edges have angles that are close to
        // straight or close to 180 degrees. Zero means that no quads are
        // rejected. (In radians).
        double critical_rad;

        // When fitting lines to the contours, what is the maximum mean
        // squared error allowed?  This is useful in rejecting contours
        // that are far from being quad shaped; rejecting these quads "early"
        // saves expensive decoding processing.
        double max_line_fit_mse;

        // When we build our model of black & white pixels, we add an
        // extra check that the white model must be (overall) brighter
        // than the black model.  How much brighter? (in pixel values,
        // [0,255]). .
        int min_white_black_diff;

        // should the thresholded image be deglitched?
        bool deglitch;
    };

    struct AprilTagDetection
    {
        AprilTagFamily family;
        int decoded_id;
        int hamming;
        double goodness;
        double decision_margin;
        cv::Mat homography;  
        cv::Point2D center;
        std::array<cv::Point2D, 4> tag_corners;   
    };

    class AprilTagDetector
    {
    public:
        AprilTagDetector();
        AprilTagDetector(QuadThreshParams qt_params);
        AprilTagDetector(DetectorParams d_params);
        AprilTagDetector(QuadThreshParams qt_params, DetectorParams d_params);
        ~AprilTagDetector();

        QuadThreshParams GetQuadThreshParams() const;
        DetectorParams GetTagDetectorParams() const; 

        void SetQuadThreshParams(QuadThreshParams params);
        void SetDetectorParams(DetectorParams params);

        void AddFamily(const AprilTagFamily& family);
        void RemoveFamly(const AprilTagFamily& family);
        std::vector<AprilTagDetection> Detect(const cv::Mat& img) const;

    private:
        QuadThreshParams quad_params;
        DetectorParams detector_params;
    };
}