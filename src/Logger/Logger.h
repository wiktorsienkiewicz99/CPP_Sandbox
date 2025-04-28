//
// Created by Wiktor Sienkiewicz on 23/04/2025.
//
#pragma once
#include <iostream>

class Logger {


    public:

        enum LoggerState {
            INFO = 0, //0
            WARNING = 1, //1
            ERROR = 2 //2
        };

    private:
        static LoggerState m_LoggerState; //when using LoggerState we can only assign values from enum


    public:
        static void SetState(LoggerState state);

        static void Info(const char* message);

        static void Warning(const char* message);

        static void Error(const char* message);

        template<typename T>
        static void Log(const T &message) {
            std::cout << "LOG: " << message << std::endl;
        }
};


