#include "Variables.h"
#include "../Logger/Logger.h"
#include <string> // include with <>

int getSizeOfInt(int a) {
    return sizeof(a);
}

void remindVariableSizes() {
    Logger::Info("Size of int (in bytes):");
    Logger::Log(std::to_string(getSizeOfInt(1)).c_str());

    Logger::Info("Size of float (in bytes):");
    Logger::Log(std::to_string(getSizeOfVariable(1.0f)).c_str());

    Logger::Info("Size of string (in bytes):");
    Logger::Log(std::to_string(getSizeOfVariable("Hello World!")).c_str());

    Logger::Info("Size of char (in bytes):");
    Logger::Log(std::to_string(getSizeOfVariable('a')).c_str());

    Logger::Info("Size of bool (in bytes):");
    Logger::Log(std::to_string(getSizeOfVariable(true)).c_str());

    Logger::Info("Size of double (in bytes):");
    Logger::Log(std::to_string(getSizeOfVariable(1.0)).c_str());

    Logger::Info("Size of long double (in bytes):");
    Logger::Log(std::to_string(getSizeOfVariable(1.0l)).c_str());

    Logger::Info("Size of long long (in bytes):");
    Logger::Log(std::to_string(getSizeOfVariable(1ll)).c_str());

    Logger::Info("Size of short (in bytes):");
    short a = 1;
    Logger::Log(std::to_string(getSizeOfVariable(a)).c_str());
}