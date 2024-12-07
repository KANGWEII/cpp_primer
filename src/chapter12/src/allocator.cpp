#include <memory>
#include <iostream>

int main() {

    std::allocator<int> alloc;
    int* p = alloc.allocate(5);  // Allocate space for five ints

    // Initialize the allocated memory
    for (int i = 0; i < 5; ++i) {
        alloc.construct(p + i, i + 1);
    }

    // Print the values
    for (int i = 0; i < 5; ++i) {
        std::cout << p[i] << " ";
    }
    std::cout << std::endl;

    // Destroy the constructed objects
    for (int i = 0; i < 5; ++i) {
        alloc.destroy(p + i);
    }

    // Deallocate the memory
    alloc.deallocate(p, 5);
    
    return 0;
}