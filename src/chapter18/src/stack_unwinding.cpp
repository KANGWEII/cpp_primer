#include <iostream>

/*
1. When an exception is thrown using throw, the program begins to look for a
matching catch block to handle the exception.

2. If no matching catch block is found in the current function, the function
terminates, and the program unwinds the stack by moving to the previous function
in the call chain.

3. During stack unwinding, destructors of all local objects in the stack frame
of the function being exited are automatically called in reverse order of their
creation. This ensures proper cleanup of resources (e.g., memory, file handles,
locks).

4. The stack unwinding process continues up the call chain until either a
matching catch block is found or the program terminates if no handler exists.
*/

class Base {
 private:
  std::string func;

 public:
  Base(const std::string& func) {
    this->func = func;
    std::cout << "Constructing " << this->func << std::endl;
  }

  ~Base() { std::cout << "Deconstructing " << this->func << std::endl; }
};

void FuncC() {
  Base F3("F3");
  throw std::runtime_error("Exception in function FuncC");
}

void FuncB() {
  Base F2("F2");
  FuncC();
}

void FuncA() {
  Base F1("F1");

  try {
    FuncB();
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }
}

int main() {
  FuncA();
  return 0;
}