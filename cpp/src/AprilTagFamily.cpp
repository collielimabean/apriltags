#include "AprilTagFamily.hpp"

using namespace AprilTags;

AprilTagFamily::AprilTagFamily (
    std::string family_name,
    unsigned int tag_width,
    unsigned int hamming,
    unsigned long *raw_codes,
    unsigned int num_raw_codes,
    unsigned int border_width = 1
)
{
    this->family_name = family_name;
    this->black_border = border_width;
    this->tag_width = tag_width,
    this->hamming = hamming;
    this->codes.assign(raw_codes, raw_codes + num_raw_codes);
}

AprilTagFamily::~AprilTagFamily()
{
}

const std::vector<unsigned long>& AprilTagFamily::GetCodes() const
{
    return this->codes;
}

const std::string& AprilTagFamily::GetName() const
{
    return this->family_name;
}

int AprilTagFamily::GetBlackBorderWidth() const
{
    return this->black_border;
}

int AprilTagFamily::GetTagWidth() const
{
    return this->tag_width;
}

int AprilTagFamily::GetHamming() const
{
    return this->hamming;
}