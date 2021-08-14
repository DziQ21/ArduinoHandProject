
#include<iostream>
#include<string>
#include"SerialPort.h"
#include "MouseController.h"
#include "ThreeDimVector.h"
#include "VectorMovementConverter.h"
char output[MAX_DATA_LENGTH];

// change the name of the port with the port name of your computer
// must remember that the backslashes are essential so do not remove them
char commport[] = R"(\\.\COM4)";
char *port = commport;

int main(){
    MouseController mouseController;
    SerialPort arduino(port);
    if(arduino.isConnected()){
        std::cout<<"Connection made"<<std::endl<<std::endl;
    }
    else{
        std::cout<<"Error in port name"<<std::endl<<std::endl;
    }
    std::string data="a";

    char *charArray = new char[data.size() + 1];
    copy(data.begin(), data.end(), charArray);
    charArray[data.size()] = '\n';
    DWORD numerek;
    arduino.writeSerialPort(charArray, 2,numerek);
    Sleep(20);
    arduino.readSerialPort(output, MAX_DATA_LENGTH);
    std::string temp1=output;
    std::cout<<"cyce "<<output;
    Sleep(5000);
    arduino.writeSerialPort(charArray, 2,numerek);
    Sleep(20);
    arduino.readSerialPort(output, MAX_DATA_LENGTH);
    std::string temp2=output;
    std::cout<<"\ncyce2 "<<output;
    VectorToMovementConverter converter(ThreeDimVector::stringToVector(temp1), ThreeDimVector::stringToVector(temp2));
    std::cout<<"cyce3";
    Sleep(1000);

    delete [] charArray;

    while(arduino.isConnected()){

        charArray = new char[data.size() + 1];
        copy(data.begin(), data.end(), charArray);
        charArray[data.size()] = '\n';
        arduino.writeSerialPort(charArray, 2,numerek);
        auto buff=converter.calculateMovement(ThreeDimVector::stringToVector(output));
        //std::cout<<">>"<<buff[0]<<" "<<buff[1]<<std::endl;
        mouseController.moveMouse(buff[0],buff[1]);
        Sleep(5);
        arduino.readSerialPort(output, MAX_DATA_LENGTH);

        //std::cout<<numerek<<">> "<<output<<" "<<strlen(output)<<std::endl;
        //std::cout<<ThreeDimVector::stringToVector(output)[0]<<" "<<ThreeDimVector::stringToVector(output)[1]<<" "<<ThreeDimVector::stringToVector(output)[2]<<std::endl;
        //cout<<">> "<<arduino.readOneLine()<<arduino.readOneLine()<<arduino.readOneLine()<<"dupa"<<endl;

        delete [] charArray;
    }
    return 0;
}
