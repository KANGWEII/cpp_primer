#include <iostream>
#include <utility>

class MoveAssignment {
 private:
  int* data;

 public:
  // Default Constructor
  MoveAssignment(int value = 0) : data(new int(value)) {
    std::cout << "Default Constructor called\n";
  }

  // Move Assignment Operator
  MoveAssignment& operator=(MoveAssignment&& other) noexcept {
    std::cout << "Move Assignment Operator called\n";

    if (this != &other) {    // Avoid self-assignment
      delete data;           // Release current resource
      data = other.data;     // Transfer ownership
      other.data = nullptr;  // Leave 'other' in a valid state
    }

    return *this;
  }

  // Destructor
  ~MoveAssignment() {
    delete data;
    std::cout << "Destructor called\n";
  }

  void display() const {
    if (data)
      std::cout << "Value: " << *data << "\n";
    else
      std::cout << "Object is empty\n";
  }
};

int main() {
  MoveAssignment obj1(42);  // Default constructor
  MoveAssignment obj2(10);  // Default constructor

  obj2 = std::move(obj1);  // Move assignment operator

  obj1.display();  // Outputs: Object is empty
  obj2.display();  // Outputs: Value: 42

  return 0;
}