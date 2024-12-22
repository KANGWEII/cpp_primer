#include <iostream>

void processValue(int& lref) {
  std::cout << "Lvalue reference called" << std::endl;
}

void processValue(int&& rref) {
  std::cout << "Rvalue reference called" << std::endl;
}

int main() {
  int a = 10;        // "a" is an lvalue (it has memory location)
  processValue(a);   // Calls lvalue overload
  processValue(20);  // Calls rvalue overload

  return 0;
}