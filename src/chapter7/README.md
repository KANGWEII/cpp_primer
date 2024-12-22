# Chapter 7 (Classes)

## Structure
1. [**Abstract Class**](./src/abstract_class.cpp)
2. [**Encapsulation Class**](./src/encapsulation_class.cpp)
3. [**Friend Function**](./src/friend_function.cpp)
4. [**Friend Class**](./src/friend_class.cpp)
5. [**Inline**](./src/inline.cpp)
6. [**`this` pointer**](./src/this.cpp)
7. [**Method Chaining**](./src/method_chaining.cpp)

## Q&A
### Question 1
**Q:** What is abstraction?  
**A:** Abstraction is about simplifying complex systems by modeling classes to represent real-world concepts. It hides the complex implementation details and exposes only the necessary features or behaviors.

### Question 2
**Q:** What is encapsulation?  
**A:** Encapsulation refers to the bundling of data (variables) and the methods (functions) that operate on that data into a single unit (class). By using access specifiers like public, protected, and private to control the visibility and accessibility of class members. Encapsulation serves to:
- **Hide the internal state** of an object from the outside world (this is called data hiding).
- **Control access** to the internal data of the class, ensuring that only valid operations are performed on the object.
- **Improve code maintainability** by keeping the data and operations together in a structured way.

---

### Question 3
**Q:** What is `friend`?  
**A:** The `friend` keyword is used to declare a function, class, or another entity as a **friend** of a class. A friend has special access to the private and protected members of the class in which it is declared. This allows the friend to access the internal data of the class even though it would normally be restricted.

---

### Question 4
**Q:** What is `inline`?  
**A:** The `inline` keyword is typically used to define functions (or methods) where the compiler is encouraged to insert the function's body directly at the point of the call, instead of performing a regular function call. Often done for small, frequently called functions to improve performance by reducing function call overhead.

---

### Question 5
**Q:** What is method chaining?  
**A:** A programming technique in which multiple methods are called on the same object in a single statement, one after the other. The idea is to return the object itself (or a reference to it) from each method, which allows subsequent method calls to be chained together.