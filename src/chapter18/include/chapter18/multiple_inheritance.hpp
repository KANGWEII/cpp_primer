#ifndef CHAPTER18_MULTIPLE_INHERITANCE_HPP
#define CHAPTER18_MULTIPLE_INHERITANCE_HPP

#include <iostream>

namespace example {
class base1 {
 public:
  void display();
};

class base2 {
 public:
  void display();
};

class derived : public base1, public base2 {};
}  // namespace example

#endif /* CHAPTER18_MULTIPLE_INHERITANCE_HPP */
