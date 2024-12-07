#include <memory>
#include <iostream>

int main() {
  /****************************************************************
   *                       unique_ptr                            *
   * **************************************************************/

  // Create a unique_ptr to manage a dynamically allocated integer
  std::unique_ptr<int> up = std::make_unique<int>(42);

  // Access and manipulate the value
  std::cout << "Value: " << *up << "\n";
  *up = 100;  // Modify the value
  std::cout << "Updated Value: " << *up << "\n";

  // Transfer ownership to another unique_ptr
  std::unique_ptr<int> up2 = std::move(up);
  std::cout << "\nTransferred ownership to up2" << std::endl;
  std::cout << "Value in up2: " << *up2 << "\n";

  // No need to explicitly delete the integer; unique_ptr will handle it

  return 0;
}