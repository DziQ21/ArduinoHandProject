
#include<iostream>
#include<string>
#include "MouseController.h"
#include "ThreeDimVector.h"
#include "VectorMovementConverter.h"
#include "StringGetter.hpp"



// change the name of the port with the port name of your computer
// must remember that the backslashes are essential so do not remove them

int main(){
    StringGetter getter("../dane.txt");
    MouseController mouseController;
    std::cout<<"witaj kolego bez arduino";

    std::string temp1=getter.getString();
    std::cout<<"cyce";
    Sleep(2000);
    //for(int i=0;i<5;i++){
        //temp1=getter.getString();
        //std::cout<<"a "<<temp1<<temp1.length();
    //}
    std::string temp2=getter.getString();
    std::cout<<temp2<<temp2.length()<<std::endl;

    std::cout<<temp1<<temp1.length();
    VectorToMovementConverter converter(ThreeDimVector::stringToVector(temp1), ThreeDimVector::stringToVector(temp2));
    std::cout<<"cyce2";
    Sleep(1000);

    while(true){//XDDDDDDDDDDDDDDDDDDDDD


        auto buff=converter.calculateMovement(ThreeDimVector::stringToVector(getter.getString()));
        //std::cout<<">>"<<buff[0]<<" "<<buff[1]<<std::endl;
        mouseController.moveMouse(buff[0],buff[1]);
        Sleep(100);

        //std::cout<<numerek<<">> "<<output<<" "<<strlen(output)<<std::endl;
        //std::cout<<ThreeDimVector::stringToVector(output)[0]<<" "<<ThreeDimVector::stringToVector(output)[1]<<" "<<ThreeDimVector::stringToVector(output)[2]<<std::endl;
        //cout<<">> "<<arduino.readOneLine()<<arduino.readOneLine()<<arduino.readOneLine()<<"dupa"<<endl;

    }
    return 0;
}

