// Increment.h
//
// Created by Wiktor Sienkiewicz on 28/04/2025.
//
// Provides basic increment functions for integers:
// - by value
// - by pointer
// - by reference

#pragma once

// Increment an integer passed **by value** (does NOT modify original)
void IncrementBasic(int value);

// Increment an integer passed **by pointer** (modifies original)
void IncrementPointerReference(int* value);

// Increment an integer passed **by reference** (modifies original)
void IncrementReference(int& value);