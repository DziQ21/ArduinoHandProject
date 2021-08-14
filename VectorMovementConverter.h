//
// Created by acer on 11.08.2021.
//

#ifndef REKA_VECTORMOVEMENTCONVERTER_H
#define REKA_VECTORMOVEMENTCONVERTER_H
#include "ThreeDimVector.h"
#define IGNORE_RATIO 0.1

class VectorToMovementConverter {
public:
    VectorToMovementConverter(const std::array<float, 3> &upVector_,const std::array<float, 3> &rightVector_);
    void reConfig(const std::array<float, 3> &upVector_,const std::array<float, 3> &rightVector_);
    std::array<float, 2> calculateMovement(const std::array<float, 3> &vector);
private:
    std::array<float, 3> upVector,rightVector,forwardVector;
    VectorToMovementConverter()= default;;
    float calculatePower(const std::array<float, 3> &vector);
};


#endif //REKA_VECTORMOVEMENTCONVERTER_H
