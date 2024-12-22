#include <iostream>

// Function template
template <typename T>
T Add(T a, T b) {
  return a + b;
}

// Template with multiple data types
template <typename T1, typename T2>
void MultipleTypes(T1 a, T2 b) {
  std::cout << "First type: " << a << ", Second type: " << b << std::endl;
}

int main() {
  std::cout << "Integers: " << Add(1, 2) << std::endl;
  std::cout << "Float: " << Add(5.55, 4.45) << std::endl;

  MultipleTypes("Hi", 30759218);

  return 0;
}