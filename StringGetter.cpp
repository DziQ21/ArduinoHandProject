//
// Created by acer on 13.08.2021.
//

#include <synchapi.h>
#include <iostream>
#include "StringGetter.hpp"

std::string StringGetter::getString() {
    std::string result;
    std::string buff;
    Sleep(fakeLag);
    for(auto i =0;i<3;i++){
        data>>buff;
        result+=buff+"\n";
    }
    return result;
}

StringGetter::StringGetter(const std::string& s_) {
    this->data.open(s_);
}

StringGetter::~StringGetter() {
    this->data.close();
}
