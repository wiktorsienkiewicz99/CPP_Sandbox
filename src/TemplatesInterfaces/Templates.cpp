//
// Created by Wiktor Sienkiewicz on 19/05/2025.
//

#include "Templates.h"

#include <iostream>
#include <ostream>

template<typename T>
T max(T a, T b) {
    return a > b ? a : b;
}
template<typename T>
T min(T a, T b) {
    return a < b ? a : b;
}

template<typename T>
Pair<T>::Pair(T a, T b) {
    first = a;
    second = b;
}
template<typename T>
void Pair<T>::displayValues() const {
    std::cout << first << " " << second << std::endl;
}

