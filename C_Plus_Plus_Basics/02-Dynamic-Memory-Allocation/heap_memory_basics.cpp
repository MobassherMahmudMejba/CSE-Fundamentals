#include <iostream>
using namespace std;

/**
 * Project: Understanding Heap Memory
 * Concept: Allocating memory dynamically during runtime.
 * Goal: Ensure data persists outside function scope and prevent memory leaks.
 */

int* create_dynamic_data() {
    // Allocating an integer on the Heap
    int* heap_ptr = new int; 
    *heap_ptr = 75; // Assigning a value
    
    cout << "[LOG] Memory allocated on Heap at: " << heap_ptr << endl;
    return heap_ptr;
}

int main() {
    // Getting the pointer from the function
    int* my_data = create_dynamic_data();

    cout << "[MAIN] Accessing Heap Value: " << *my_data << endl;

    // CRITICAL STEP: De-allocating memory to prevent Memory Leaks
    delete my_data; 
    my_data = nullptr; // Safety first: resetting the pointer

    cout << "[LOG] Memory successfully freed." << endl;

    return 0;
}