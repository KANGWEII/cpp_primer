#include <iostream>

class CopyConstructor {
 public:
  // Pointer to dymanically allocated memory
  int* data;

  // Default constructor
  CopyConstructor(int value) : data(new int(value)) {
    std::cout << "Default constructor called" << std::endl;
  }

  // Copy constructor
  CopyConstructor(const CopyConstructor& other) : data(new int(*other.data)) {
    std::cout << "Copy constructor called" << std::endl;
  }

  // Destructor
  ~CopyConstructor() {
    delete data;
    std::cout << "Destructor called" << std::endl;
  }

  // Display data
  void display() { std::cout << "Data: " << *data << std::endl; }
};

int main() {
  // Create object
  CopyConstructor obj1(10);
  obj1.display();

  // Copy object
  CopyConstructor obj2 = obj1;
  obj2.display();

  return 0;
}