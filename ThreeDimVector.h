//
// Created by acer on 09.08.2021.
//

#ifndef REKA_STRINGPARSER_H
#define REKA_STRINGPARSER_H
#include <array>
#include <string>
namespace ThreeDimVector{
    std::array<float,3> stringToVector(const std::string &_string);
    std::array<float,3> normalizeVector(const std::array<float,3> &vector_);
    std::array<float,3> crossProduct(const std::array<float,3> &a_,const std::array<float,3> &b_);
    float dotProduct(const std::array<float,3> &a_,const std::array<float,3> &b_);
    bool isStringOK(const std::string &string);
};


#endif //REKA_STRINGPARSER_H
