//
// Created by acer on 04.08.2021.
//

#include "MouseController.h"

bool MouseController::moveMouse(float x, float y) {
    POINT point;
    GetCursorPos(&point);
    return SetCursorPos(point.x+x,point.y-y);
}

MouseController::MouseController() {

}


