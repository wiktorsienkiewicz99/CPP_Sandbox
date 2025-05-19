//
// Created by Wiktor Sienkiewicz on 19/05/2025.
//

#include "Logger.h"

void ConsoleLogger::log(const std::string &a) {
    std::cout << "String: " << a << std::endl;
}

void FileLogger::log(const int &a) {
    std::cout << "Integer: " << a << std::endl;
}

