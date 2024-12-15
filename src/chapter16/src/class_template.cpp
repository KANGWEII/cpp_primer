#include <iostream>

template <typename T>
class ClassTemplate {
 private:
  T value;

 public:
  // Constructor
  ClassTemplate(T val) : value(val) {}

  void Display() { std::cout << "Value: " << value << std::endl; }
};

int main() {
  ClassTemplate t1(24);
  ClassTemplate t2("Hello World");
  ClassTemplate<float> t3(3.9);     // Explicit instantiation

  t1.Display();
  t2.Display();
  t3.Display();

  return 0;
}