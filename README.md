# Undefined Behavior When Modifying std::vector via Raw Pointer After push_back

This repository demonstrates a common, yet subtle, bug in C++ involving the use of raw pointers with `std::vector`. Modifying a vector's elements through a raw pointer after calling `push_back` can lead to undefined behavior if the vector's internal array is reallocated.

## Bug Description
The bug arises from the assumption that the raw pointer remains valid after vector reallocations. When a vector's capacity is exceeded, it may allocate a larger array and copy elements. This invalidates any existing pointers to the original data.

## How to Reproduce
Compile and run the provided `bug.cpp` code.  The results are unpredictable because they depend on the compiler and the system's memory allocation.  The code might crash, produce incorrect results, or appear to work correctly. 

## Solution
The solution (`bugSolution.cpp`) demonstrates a safer approach using iterators.  Iterators are designed to be resilient to vector reallocations, thus avoiding the risks associated with raw pointers.