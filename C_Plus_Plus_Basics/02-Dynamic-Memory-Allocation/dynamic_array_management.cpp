#include <iostream>
using namespace std;

/**
 * Concept: Dynamic Array Management
 * Goal: Efficiently allocate, resize, and free memory at runtime.
 */

// Function to create a dynamic array and return it
int* create_initial_array(int size) {
    int* arr = new int[size]; // Dynamic Allocation
    for(int i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10; // Initializing with some dummy data
    }
    return arr;
}

int main() {
    int old_size = 3;
    int new_size = 5;

    // 1. Initial Allocation
    int* main_arr = create_initial_array(old_size);
    cout << "Original Array: ";
    for(int i = 0; i < old_size; i++) cout << main_arr[i] << " ";
    cout << endl;

    // 2. Resizing Logic (The Professional Way)
    int* expanded_arr = new int[new_size]; // Step 1: Create a bigger array
    for(int i = 0; i < old_size; i++) {
        expanded_arr[i] = main_arr[i]; // Step 2: Copy old data
    }
    expanded_arr[3] = 40; // Step 3: Add new data
    expanded_arr[4] = 50;

    // 3. Memory Cleanup (Critical for Performance)
    delete[] main_arr; // Freeing old memory to avoid Memory Leak
    main_arr = expanded_arr; // Pointing to the new, bigger array

    cout << "Resized Array: ";
    for(int i = 0; i < new_size; i++) cout << main_arr[i] << " ";
    cout << endl;

    // Final Cleanup
    delete[] main_arr; 
    main_arr = nullptr;

    return 0;
}