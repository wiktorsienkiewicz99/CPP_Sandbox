//
// Created by Wiktor Sienkiewicz on 19/05/2025.
//

#pragma once
#include <iostream>
#include <string>

template<typename T>
class Logger {
public:
    virtual void log(const T& a) = 0;
    virtual ~Logger() = default;
};

class ConsoleLogger : public Logger<std::string> {
public:
    void log(const std::string& a) override;
};

class FileLogger : public Logger <int> {
public:
    void log(const int& a) override;
};