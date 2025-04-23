//
// Created by Wiktor Sienkiewicz on 23/04/2025.
//

#include "Variables.h"
#include "string"

void Log(const char* message);

int getSizeOfInt(int a) {
    return sizeof(a);
}

void remindVariableSizes() {
    Log("Size of int (in bytes):");
    Log(std::to_string(getSizeOfInt(1)).c_str());

    Log("Size of float (in bytes):");
    Log(std::to_string(getSizeOfVariable(1.0f)).c_str());

    Log("Size of string (in bytes):");
    Log(std::to_string(getSizeOfVariable("Hello World!")).c_str());

    Log("Size of char (in bytes):");
    Log(std::to_string(getSizeOfVariable('a')).c_str());

    Log("Size of bool (in bytes):");
    Log(std::to_string(getSizeOfVariable(true)).c_str());

    Log("Size of double (in bytes):");
    Log(std::to_string(getSizeOfVariable(1.0)).c_str());

    Log("Size of long double (in bytes):");
    Log(std::to_string(getSizeOfVariable(1.0l)).c_str());

    Log("Size of long long (in bytes):");
    Log(std::to_string(getSizeOfVariable(1ll)).c_str());

    Log("Size of short (in bytes):");
    short a = 1;
    Log(std::to_string(getSizeOfVariable(a)).c_str());
}