//
// Created by acer on 09.08.2021.
//

#include <iostream>
#include <valarray>
#include "ThreeDimVector.h"

namespace ThreeDimVector{

    std::array<float,3> stringToVector(const std::string &string){
        if(!isStringOK(string))
            throw std::invalid_argument("string is wrong "+string);
        std::array<float,3> result;
        std::string::size_type startPos=2;
        result[0]= std::stof(string.substr(startPos));
        startPos=string.find("Y",startPos)+2;
        result[1]= std::stof(string.substr(startPos));
        startPos=string.find("Z",startPos)+2;
        result[2]= std::stof(string.substr(startPos));
        return result;
    }

    std::array<float,3> normalizeVector(const std::array<float,3> &vector){
        std::array<float,3> result{};
        float mod = 0.0;
        for (size_t i = 0; i < vector.size(); ++i) {
            mod += vector[i] * vector[i];
        }

        float mag = std::sqrt(mod);
        if (mag == 0) {
            throw std::logic_error("The input vector is a zero vector");
        }

        for (size_t i = 0; i < result.size(); ++i) {
            result[i] = vector[i] / mag;
        }

        return result;
    }
    std::array<float,3> crossProduct(const std::array<float,3> &a,const std::array<float,3> &b){
        std::array<float,3> result;
        result[0] = a[1] * b[2] - a[2] * b[1];
        result[1] = a[2] * b[0] - a[0] * b[2];
        result[2] = a[0] * b[1] - a[1] * b[0];
        return result;
    }
    float dotProduct(const std::array<float,3> &a,const std::array<float,3> &b){
        return a[0]*b[0]+a[1]*b[1]+a[2]*b[2];
    }
    bool isStringOK(const std::string &string){
        if(string[0]!='X'){
            return false;
        }
        if(string.find('Y')<0)
            return false;
        if(string.find('Z')<0)
            return false;
        return true;
    }
};
