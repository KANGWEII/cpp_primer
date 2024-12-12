# Chapter 15 (Object-Oriented Programming)

## Overview
OOP is based on three fundamental concepts: 
- Data abstraction  
  Define classes that separate interface from implementation
- Inheritance  
  Define classes that model the relationships among similar types
- Dynamic binding  
  Use objects of similar types while ignoring the details of how they differ

1. base class
2. derived class
3. inherit from inherited base

## Q&A
### Question 1
**Q:** Does access control applies to derived classes?  
**A:** Yes, a derived class can only access the public and protected members. The protected access specifier allows the derived class to access the members of the base class while prohibiting non-derived classes from accessing them.

---

### Question 2
**Q:** How to prevent inheritance?  
**A:** By adding `final` after the class name (eg. `class NoDerived final {...}`)

---

### Question 3
**Q:** What is polymorphism?  
**A:** Polymorphism is a key concept in object-oriented programming (OOP) that allows objects of different classes to be treated as objects of a common base class. It enables a single interface to represent different underlying forms. 
- Compile-Time Polymorphism (Static Binding)
  - Occurs when the method call is resolved during the compilation phase (eg. **method overloading**, **operator overloading**)
- Run-Time Polymorphism (DynamicBinding)
  - Ocurs when the method call is resolved during the execution phase (eg. **Virtual functions**)

---

### Question 4
**Q:** What is virtual function?  
**A:** A member function in a base class that you can override in a derived class. It is declared using the keyword virtual in the base class. When a virtual function is called through a pointer or reference to the base class, the version of the function executed is determined by the type of the object being pointed to, rather than the type of the pointer or reference.