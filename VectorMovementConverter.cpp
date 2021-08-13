//
// Created by acer on 11.08.2021.
//

#include "VectorMovementConverter.h"
#include <math.h>
#include <iostream>

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

std::array<float, 2> VectorToMovementConverter::calculateMovementFromDeg(const std::array<float, 2> &vector) {
    auto result=vector;
    std::cout<<" dupa "<<result[0]<<"  "<<result[1]<<std::endl;
    if(abs(result[0])<0.09)
        result[0]=0;
    if(abs(result[1])<0.09)
        result[1]=0;
    //TODO ignore ratio itd ordiffrent ;
    result[0]*=result[0]*5*result[0];
    result[1]*=result[1]*5*result[1];
    return result;
}

std::array<float, 2> VectorToMovementConverter::calculateMovement(const std::array<float, 3> &vector) {
    auto normVector= ThreeDimVector::normalizeVector(vector);
    float forwardAngle=M_PI_2-acosf(ThreeDimVector::dotProduct(normVector,forwardVector));
    float rightAngle=M_PI_2-acosf(ThreeDimVector::dotProduct(normVector,rightVector));
    return calculateMovementFromDeg(std::array<float, 2>{rightAngle,forwardAngle});
}
