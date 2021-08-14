//
// Created by acer on 11.08.2021.
//

#include "VectorMovementConverter.h"
#include <math.h>
#include <iostream>
using ThreeDimVector::operator*;
using ThreeDimVector::operator+;
using ThreeDimVector::operator-;
VectorToMovementConverter::VectorToMovementConverter(const std::array<float, 3> &upVector_,
                                                     const std::array<float, 3> &rightVector_) {
    this->reConfig(upVector_,rightVector_);
}

void VectorToMovementConverter::reConfig(const std::array<float, 3> &upVector_,
                                         const std::array<float, 3> &rightVector_) {
    upVector= ThreeDimVector::normalizeVector(upVector_);
    rightVector= ThreeDimVector::normalizeVector(rightVector_);
    forwardVector= ThreeDimVector::crossProduct(upVector_, rightVector_);
    forwardVector= ThreeDimVector::normalizeVector(forwardVector);
}

float VectorToMovementConverter::calculatePower(const std::array<float, 3> &vector) {
    auto normVector= ThreeDimVector::normalizeVector(vector);
    float degree= acosf(ThreeDimVector::dotProduct(normVector,upVector));
    std::cout<<" dupa "<<degree<<std::endl;
    if(degree<IGNORE_RATIO)
        degree=0;
    return degree*degree*degree*10;
}

std::array<float, 2> VectorToMovementConverter::calculateMovement(const std::array<float, 3> &vector) {
    auto vectorOnPlane= ThreeDimVector::normalizeVector(vector-upVector* ThreeDimVector::dotProduct(upVector,vector));

    float forwardAngle=M_PI_2-acosf(ThreeDimVector::dotProduct(vectorOnPlane,forwardVector));
    float rightAngle=M_PI_2-acosf(ThreeDimVector::dotProduct(vectorOnPlane,rightVector));
    std::cout<<forwardAngle<<" "<<rightAngle<<" "<<abs(rightAngle)+abs(forwardAngle)-M_PI_2<<" "<<std::endl;
    auto power= calculatePower(vector);
    return {rightAngle*power,forwardAngle*power};
}
