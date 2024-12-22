#include <iostream>
#include <utility>

class MoveConstructor {
 private:
  int* data;

 public:
  // Default Constructor
  MoveConstructor(int value) : data(new int(value)) {
    std::cout << "Default Constructor called\n";
  }

  // Move Constructor
  /* If the move constructor is not noexcept, the container may fall back to
   * using the copy constructor */
  MoveConstructor(MoveConstructor&& other) noexcept : data(other.data) {
    std::cout << "Move Constructor called\n";
    other.data = nullptr;  // Leave 'other' in a valid state
  }

  // Destructor
  ~MoveConstructor() {
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
  MoveConstructor obj1(42);               // Calls default constructor
  MoveConstructor obj2(std::move(obj1));  // Calls move constructor

  obj1.display();  // Outputs: Object is empty
  obj2.display();  // Outputs: Value: 42

  return 0;
}