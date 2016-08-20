#pragma once

#include <vector>
#include <string>

namespace AprilTags
{
    class AprilTagFamily
    {
    public:
        AprilTagFamily (
            std::string family_name,
            unsigned int tag_width,
            unsigned int hamming,
            unsigned long *raw_codes,
            unsigned int num_raw_codes,
            unsigned int border_width = 1
        );

        virtual ~AprilTagFamily();
        const std::vector<unsigned long>& GetCodes() const;
        const std::string& GetName() const;
        int GetBlackBorderWidth() const;
        int GetTagWidth() const;
        int GetHamming() const;

    private:
        std::vector<unsigned long> codes;
        std::string family_name;
        unsigned int black_border; // how wide (in bit-sizes) is the black border? (usually 1)
        unsigned int tag_width; // tags are square => width == height. e.g. 36h11 -> 6
        unsigned int hamming; // min hamming distance between codes
    };
}