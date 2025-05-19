//
// Created by Wiktor Sienkiewicz on 19/05/2025.
//

#pragma once

// GOAL: Write generic functions that work with any type
// Function templates allow to write a function that works with any data type
template<typename T>
T max(T a, T b);
template<typename T>
T min(T a, T b);

// Class templates allow to define classes that can operate on generic types.
template<typename T>
class Pair {
public:
    Pair(T a, T b);//constructor with one line values setting
    void displayValues() const;// values doesn't change inside method so it can be constant
private:
    T first;
    T second;
};
