//
// Created by Wiktor Sienkiewicz on 23/04/2025.
//

#pragma once
#include <string>

int getSizeOfInt(int a);

void remindVariableSizes();

template<typename T>
int getSizeOfVariable(T variable) {
    return sizeof(variable);
};
