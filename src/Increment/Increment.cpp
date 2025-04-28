//
// Created by Wiktor Sienkiewicz on 28/04/2025.
//

#include "Increment.h"

void IncrementBasic(int value) {
    value++;
}

void IncrementPointerReference(int* value) {
    (*value)++; // dereference first, then increment
}

void IncrementReference(int& value) {
    value++; // dereference first, then increment
}