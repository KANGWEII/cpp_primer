#include <iostream>

/*
- Inside the try block, a std::runtime_error is thrown with the message "Error
in FuncB".

- This exception is caught by the catch block with the type const
std::exception& e.

- The exception message is printed to the standard error: "Caught in FuncB:
Error in FuncB".

- After that, the exception is rethrown using throw;, which propagates the
exception to the calling function (FuncA).
*/
void FuncB() {
  try {
    throw std::runtime_error("Error in FuncB");
  } catch (const std::exception& e) {
    std::cerr << "Caught in FuncB: " << e.what() << '\n';
    throw;
  }
}

/*
- Calls FuncB(). Since FuncB throws and rethrows an exception, the exception is
passed back to FuncA.

- FuncA doesn’t catch the exception, so it propagates up to main.
*/
void FuncA() { FuncB(); }

/*
- The exception is caught in the main function’s catch block with const
std::exception& e.

- The message "Caught in main: Error in FuncB" is printed to the standard error.
*/
int main() {
  try {
    FuncA();
  } catch (const std::exception& e) {
    std::cerr << "Caught in main: " << e.what() << '\n';
  }

  return 0;
}