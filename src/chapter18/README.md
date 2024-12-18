# Chapter 18 (Tools for Large Programs)

## Structure
1. **Exception Handling**
   - [**Stack Unwinding**](./src/stack_unwinding.cpp)
   - [**Rethrow**](./src/rethrow.cpp)
2. [**Namespaces**](./src/namespaces.cpp)
3. [**Multiple Inheritance**](./src/multiple_inheritance.cpp)

## Q&A
### Question 1
**Q:** What is exception handling?  
**A:** A programming construct used to manage and respond to runtime errors or exceptional conditions in a controlled manner. It allows programs to detect errors, handle them gracefully, and continue execution without crashing unexpectedly.

---

### Question 2
**Q:** What is namespaces?  
**A:** A `namespace` is a container that holds a set of identifiers (names) and their corresponding objects or definitions. It helps organize code and prevents naming conflicts by allowing the same name to be used in different contexts without ambiguity.

---

### Question 3
**Q:** What is stack unwinding?  
**A:** Stack unwinding is the process that occurs during exception handling when an exception is thrown, and the program begins searching for an appropriate catch block. The destructors for all local objects in each function's stack frame are called in reverse order of their construction. If no catch block exists in the current function, the stack unwinds to the previous caller, continuing until an appropriate catch block is found.

---

### Question 4
**Q:** What is rethrow?  
**A:** Rethrow is the act of passing a caught exception back to the previous function's catch block in the call chain using the `throw;` statement, allowing the exception to propagate and be handled by a higher-level handler.

---

### Question 5
**Q:** What is catch-all handler `catch (...)`?  
**A:** A basic catch-all handler is a `catch (...)` block that catches any type of exception, regardless of its specific type, including exceptions that are not derived from `std::exceptions`.