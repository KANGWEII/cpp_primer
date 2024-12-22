#include <iostream>

class Base {
 public:
  Base(int num) { std::cout << "Base constructor: " << num << std::endl; }
};

class Derived : public Base {
 public:
  using Base::Base;
};

int main() {
  Derived obj(8);

  return 0;
}