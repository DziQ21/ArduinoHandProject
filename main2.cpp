//
// Created by acer on 13.08.2021.
//

#include<iostream>
#include<string>
#include <fstream>
#include"SerialPort.h"
char output[MAX_DATA_LENGTH];
// change the name of the port with the port name of your computer
// must remember that the backslashes are essential so do not remove them
char filename[]=R"(../dane.txt)";
char commport[] = R"(\\.\COM4)";
char *port = commport;

int main(){
    std::ofstream myfile;
    myfile.open (filename);
    SerialPort arduino(port);
    if(arduino.isConnected()){
        std::cout<<"Connection made"<<std::endl<<std::endl;
    }
    else{
        std::cout<<"Error in port name"<<std::endl<<std::endl;
        return ERROR;
    }
    std::string data="a";

    char *charArray = new char[data.size() + 1];
    copy(data.begin(), data.end(), charArray);
    charArray[data.size()] = '\n';
    DWORD numerek;
    arduino.writeSerialPort(charArray, 2,numerek);
    Sleep(20);
    arduino.readSerialPort(output, MAX_DATA_LENGTH);
    myfile<<output;
    std::string temp1=output;
    std::cout<<"cyce";
    Sleep(3000);
    arduino.writeSerialPort(charArray, 2,numerek);
    Sleep(20);
    arduino.readSerialPort(output, MAX_DATA_LENGTH);
    myfile<<output;
    Sleep(1000);
    std::cout<<"cyce2";

    delete [] charArray;

    while(arduino.isConnected()){

        charArray = new char[data.size() + 1];
        copy(data.begin(), data.end(), charArray);
        charArray[data.size()] = '\n';
        arduino.writeSerialPort(charArray, 2,numerek);
        Sleep(100);
        arduino.readSerialPort(output, MAX_DATA_LENGTH);
        std::string ab=output;
                //for(auto i:ab){
                    //std::cout<<i<<" "<<(int)i<<std::endl;
               // }
        myfile<<output;

        std::cout<<numerek<<">> "<<output<<" "<<strlen(output)<<std::endl;
        //std::cout<<ThreeDimVector::stringToVector(output)[0]<<" "<<ThreeDimVector::stringToVector(output)[1]<<" "<<ThreeDimVector::stringToVector(output)[2]<<std::endl;
        //cout<<">> "<<arduino.readOneLine()<<arduino.readOneLine()<<arduino.readOneLine()<<"dupa"<<endl;

        delete [] charArray;
    }
    return 0;
}


