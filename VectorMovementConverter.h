//
// Created by acer on 11.08.2021.
//

#ifndef REKA_VECTORMOVEMENTCONVERTER_H
#define REKA_VECTORMOVEMENTCONVERTER_H
#include "ThreeDimVector.h"

class VectorToMovementConverter {
public:
    VectorToMovementConverter(const std::array<float, 3> &upVector_,const std::array<float, 3> &rightVector_);
    void reConfig(const std::array<float, 3> &upVector_,const std::array<float, 3> &rightVector_);
    std::array<float, 2> calculateMovement(const std::array<float, 3> &vector);
private:
    std::array<float, 3> upVector,rightVector,forwardVector;
    VectorToMovementConverter()= default;;
    std::array<float, 2> calculateMovementFromDeg(const std::array<float, 2> &vector);
};


#endif //REKA_VECTORMOVEMENTCONVERTER_H
