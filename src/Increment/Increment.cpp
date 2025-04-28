// Increment.cpp
//
// Created by Wiktor Sienkiewicz on 28/04/2025.
//

#include "Increment.h"

void IncrementBasic(int value) {
    // Pass by value: only local copy is incremented
    value++;
}

void IncrementPointerReference(int* value) {
    // Pass by pointer: dereference first, then increment original
    if (value != nullptr) {
        (*value)++;
    }
}

void IncrementReference(int& value) {
    // Pass by reference: directly increment original
    value++;
}