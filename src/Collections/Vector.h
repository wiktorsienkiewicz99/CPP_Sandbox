//
// Created by Wiktor Sienkiewicz on 31/05/2025.
//
#include <iostream>
#include <vector>

#pragma once

static int s_AllocationCount = 0;

// overload new function to print how many bytes we are allocating and how many times we use new (so heap allocation)
void* operator new(size_t size) {
    std::cout << "Allocating " << size << " bytes" << std::endl;
    s_AllocationCount++;
    return malloc(size);
}

struct Data {
    int Value = 0;

    Data() = default; // this line requests the compiler to generate a default constructor

    Data(int value) : Value(value) {} //1. This is a parameterized constructor
};

static void printVector(std::vector<Data> vector) {
    std::cout << "Vector size: " << vector.size() << std::endl;
    if (vector.empty()) {
        return;
    }

    std::cout << "Vector contents: ";
    for (const auto& data : vector) {
        std::cout << data.Value << " ";
    }
    std::cout << std::endl;
}

void runVectorModule() {
    std::vector<Data> vector;
    for (int i = 0; i < 5; i++) {
        vector.push_back(Data(i));
    }
    printVector(vector);
}

