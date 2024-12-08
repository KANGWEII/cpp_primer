# Chapter 13 (Copy Control)

## Structure
1. [**Copy Constructor**](./src/copy_constructor.cpp)

## Q&A
### Question 1
**Q:** How classes can control what happens when objects of the class type are copied, assigned, moved, or destroyed?  
**A:** Classes control these actions through special member functions: 
- copy constructor
- copy-assignment operator
- move constructor
- move-assignment operator
- destructor

---

### Question 2
**Q:** What is a copy constructor?  
**A:** A copy constructor in C++ is a special type of constructor used to create a new object as a copy of an existing object. It is primarily used in scenarios where you need to make a copy of an object with the same values and state as the original. 

---

### Question 3
**Q:** Why do I need a copy constructor when there's a default constructor?  
**A:**  Default copy constructor performs a shallow copy. This means it simply copies each member variable as-is, including pointers or dynamic memory addresses. It can be a problem when not using a copy constructor:

1. Shared Pointers or Resources

   If your class has pointers or manages dynamic memory, a shallow copy means both objects share the same memory. Modifying one object may unintentionally modify the other.

2. Double Deletion Issue

    When both the original object and the copied object go out of scope, their destructors will try to delete the same memory, leading to undefined behavior.

---

### Question 4
**Q:** Is copy constructor still useful in modern C++?  
**A:** The importance has decreased due to modern features like **move semantics** and **smart pointers**, which often eliminate the need for explicit copying of objects. 

Avoid Explicit Copy Constructors If:
- Your class uses smart pointers or standard containers (e.g., `std::vector`, `std::string`), as they already handle copying correctly.
- Your class relies on move semantics for better performance.
- You want to enforce immutability or prohibit copying.

---