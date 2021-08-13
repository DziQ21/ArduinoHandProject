#ifndef SERIALPORT_H
#define SERIALPORT_H

#define ARDUINO_WAIT_TIME 10000
#define MAX_DATA_LENGTH 255

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

class SerialPort
        {
        private:
            HANDLE handler;
            bool connected;
            COMSTAT status;
            DWORD errors;
        public:
            SerialPort(char *portName);
            ~SerialPort();

            int readSerialPort(char *buffer, unsigned int buf_size);
            bool writeSerialPort(char *buffer, unsigned int buf_size,DWORD &numOfBytes);
            std::string readOneLine();
            bool isConnected();
        };

#endif // SERIALPORT_H