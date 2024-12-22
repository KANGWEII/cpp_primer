#include <iostream>

class CopyAssignment {
 public:
  int* data;

  // Default constructor
  CopyAssignment(int value) : data(new int(value)) {
    std::cout << "Default constructor called" << std::endl;
  }

  // Copy Assignment Operator
  /* Comment out the operator to create double deletion and memory leak issues
    where both obj1 and obj2 are pointing to the same address. When destrcutor
    is called, address holding 8 is being "deleted" twice, throwing an error.
    Memory address pointing to 24 is lost track, leading to memory leak */
  CopyAssignment& operator=(const CopyAssignment& other) {
    if (this == &other) {
      return *this;  // Handle self-assignment if (eg. obj1 = obj1)
    }

    std::cout << "Copy assignment operator called" << std::endl;

    // Free existing resource
    delete data;

    // Allocate new memory and copy the value
    data = new int(*other.data);

    return *this;  // Return the current object to allow chaining
  }

  ~CopyAssignment() {
    delete data;
    std::cout << "Destructor called" << std::endl;
  }

  void display() { std::cout << "Data: " << *data << std::endl; }
};

int main() {
  CopyAssignment obj1(8);   // Default constructor called
  CopyAssignment obj2(24);  // Default constructor called

  obj1 = obj2;  // Copy assignment operator called

  obj1.display();  // Data: 24

  return 0;
}