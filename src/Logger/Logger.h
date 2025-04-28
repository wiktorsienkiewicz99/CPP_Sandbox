// Logger.h
//
// Created by Wiktor Sienkiewicz on 23/04/2025.
//

#pragma once

#include <iostream>

class Logger {
public:
    // Enum representing logging levels
    enum LoggerState {
        INFO = 0,
        WARNING = 1,
        ERROR = 2
    };

private:
    // Static variable to store current logging level
    static LoggerState m_LoggerState;

public:
    // Set the current logger state (severity level)
    static void SetState(LoggerState state);

    // Specialized log methods for different levels
    static void Info(const char* message);
    static void Warning(const char* message);
    static void Error(const char* message);

    // Generic template log method for any type
    template<typename T>
    static void Log(const T &message) {
        std::cout << "LOG: " << message << std::endl;
    }
};