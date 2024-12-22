#include <iostream>

namespace A {
void greet() { std::cout << "Hello from Namespace A!" << std::endl; }
}  // namespace A

namespace B {
void greet() { std::cout << "Hello from Namespace B!" << std::endl; }
}  // namespace B

int main() {
  {
    using namespace A;
    greet();  // Calls A::greet()
  }

  {
    using namespace B;
    greet();  // Calls B::greet()
  }
  return 0;
}