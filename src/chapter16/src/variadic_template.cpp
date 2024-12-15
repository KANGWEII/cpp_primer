#include <iostream>

template <typename... Args>
void Display(Args... args) {
  ((std::cout << args << " "), ...);    // Fold expression
  std::cout << std::endl;
}

int main() {
  Display(1, 2, 3.4, "Hello");

  return 0;
}