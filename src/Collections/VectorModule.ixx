//
// Created by Wiktor Sienkiewicz on 31/05/2025.
//

export module VectorModule;

#include <iostream>
#include <vector>


static int s_AllocationCount = 0;

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

export void runVectorModule() {
    std::vector<Data> vector;
    for (int i = 0; i < 5; i++) {
        vector.push_back(Data(i));
    }
    printVector(vector);
}

