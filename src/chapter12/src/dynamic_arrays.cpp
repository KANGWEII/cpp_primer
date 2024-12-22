#include <memory>
#include <iostream>

int main() {
  // Create a unique_ptr for a dynamic array of size 5
  std::unique_ptr<int[]> arr = std::make_unique<int[]>(5);

  // Initialize and access elements
  for (int i = 0; i < 5; ++i) {
    arr[i] = i + 1;
  }

  // Display the elements
  std::cout << "Dynamic Array Elements: ";
  for (int i = 0; i < 5; ++i) {
    std::cout << arr[i] << " ";
  }
  std::cout << "\n";

  // No need to delete manually; unique_ptr handles cleanup
  return 0;
}