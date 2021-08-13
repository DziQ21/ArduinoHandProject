cmake_minimum_required(VERSION 3.0)
project(reka)

set(CMAKE_CXX_STANDARD 17)

add_executable(reka main.cpp
        ThreeDimVector.h ThreeDimVector.cpp
        SerialPort.h SerialPort.cpp
        MouseController.cpp MouseController.h VectorMovementConverter.cpp VectorMovementConverter.h)
add_executable(HandRecorder main2.cpp
        SerialPort.h SerialPort.cpp
       )
add_executable(handwithoutArdruino main3.cpp
        ThreeDimVector.h ThreeDimVector.cpp
        StringGetter.cpp StringGetter.hpp
        SerialPort.h SerialPort.cpp
        MouseController.cpp MouseController.h VectorMovementConverter.cpp VectorMovementConverter.h)