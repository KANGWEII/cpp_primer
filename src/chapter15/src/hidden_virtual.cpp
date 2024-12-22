#include <iostream>

/* When a derived class introduces a function with the same name but a different
 * signature as a base class virtual function, the base class’s function is
 * hidden. The best practice is to explicitly use the "override" keyword to
 * avoid accidental hiding or different naming. */

class Base {
 public:
  virtual void display() { std::cout << "Base display()" << std::endl; }
};

class Derived : public Base {
 public:
  void display(int num) {
    std::cout << "Derived display(int): " << num << std::endl;
  }
};

int main() {
  Base bobj;
  Derived dobj;

  /****************************************************************
   *                                                              *
   *             Access hidden virtual function                   *
   *                                                              *
   ****************************************************************/
  Base* bp1 = &bobj;
  Base* bp2 = &dobj;

  bp1->display();  // Calls Base::display()
  bp2->display();  // Calls Base::display()

  /****************************************************************
   *                                                              *
   *                Calls Derived::display(int)                   *
   *                                                              *
   ****************************************************************/
  Derived* dp1 = &dobj;

  dp1->display(24);  // Calls Derived::display(int)

  return 0;
}