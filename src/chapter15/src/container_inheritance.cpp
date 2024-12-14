#include <iostream>
#include <vector>
#include <memory>

class Base {
 public:
  virtual void display() const { std::cout << "Base display()" << std::endl; }
};

class Derived : public Base {
 public:
  void display() const override {
    std::cout << "Derived display()" << std::endl;
  }
};

int main() {
  std::vector<Base> container1;
  std::vector<Base*> raw_ptr;
  std::vector<std::unique_ptr<Base>> container2;
  Base bobj;
  Derived dobj;

  /****************************************************************
   *                                                              *
   *                       Object Slicing                         *
   *  The derived-specific members and behavior are "sliced off." *
   *                                                              *
   ****************************************************************/
  container1.push_back(bobj);
  container1.push_back(dobj);

  std::cout << "Object Slicing: " << std::endl;
  for (const auto& obj : container1) {
    obj.display();
  }

  /****************************************************************
   *                                                              *
   *                         Raw Pointer                          *
   *                                                              *
   ****************************************************************/
  // - Using raw pointer does not allocate memory dynamically
  // - Programmer must manage object lifetimes manually
  raw_ptr = {&bobj, &dobj};

  std::cout << "\nRaw pointer: " << std::endl;
  for (const auto* obj : raw_ptr) {
    obj->display();
  }

  /****************************************************************
   *                                                              *
   *                  Polymorphism and Pointers                   *
   *                                                              *
   ****************************************************************/
  container2.push_back(std::make_unique<Base>());
  container2.push_back(std::make_unique<Derived>());

  std::cout << "\nPolymorphism: " << std::endl;
  for (const auto& obj : container2) {
    obj->display();
  }

  return 0;
}