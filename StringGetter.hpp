//
// Created by acer on 13.08.2021.
//

#ifndef REKA_STRINGGETTER_HPP
#define REKA_STRINGGETTER_HPP
#include <fstream>

class StringGetter {
public:
    explicit StringGetter(const std::string& s_);
    std::string getString();
    int fakeLag=0;
    ~StringGetter();
private:

    StringGetter()=default;//jebać domyślnego hujaaa
    std::ifstream data;
};


#endif //REKA_STRINGGETTER_HPP
