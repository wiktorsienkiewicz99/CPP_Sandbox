// Variables.h
//
// Created by Wiktor Sienkiewicz on 23/04/2025.
//
// Provides utility functions for checking variable sizes.

#pragma once

#include <string>

// Get the size (in bytes) of an int
int getSizeOfInt(int a);

// Print sizes of common variable types
void remindVariableSizes();

// Generic template to get size of any variable type
template<typename T>
int getSizeOfVariable(const T& variable) {
    return sizeof(variable);
}