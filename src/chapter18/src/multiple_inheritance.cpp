#include "chapter18/multiple_inheritance.hpp"

namespace example {
void base1::display() { std::cout << "From class base1" << std::endl; }
void base2::display() { std::cout << "From class base2" << std::endl; }
}  // namespace example

int main() {
  example::derived obj;

  obj.base1::display();
  obj.base2::display();

  return 0;
}