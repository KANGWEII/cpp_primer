# Chapter 15 (Object-Oriented Programming)

## Overview
OOP is based on three fundamental concepts: 
- Data abstraction  
  Define classes that separate interface from implementation
- Inheritance  
  Define classes that model the relationships among similar types
- Dynamic binding  
  Use objects of similar types while ignoring the details of how they differ

## Structure
1. [**Basic OOP**](./src/basic_oop.cpp)
2. [**Calling a Hidden Virtual through the Base Class**](./src/hidden_virtual.cpp)
3. [**Inherited Constructors**](./src/inherited_constructors.cpp)
4. [**Containers and Inheritance**](./src/container_inheritance.cpp)

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
  - Ocurs when the method call is resolved during the execution phase (eg. **virtual functions**)

---

### Question 4
**Q:** What is virtual function?  
**A:** A member function in a base class that you can override in a derived class. It is declared using the keyword virtual in the base class. When a virtual function is called through a pointer or reference to the base class, the version of the function executed is determined by the type of the object being pointed to, rather than the type of the pointer or reference.

---

### Question 5
**Q:** What is the default inheritance protection level for derived class and struct?  
**A:** Default derivation specifier of dervied class has *private* inheritance. Struct has *public* inheritance. A best practice is to explicitly specify `private` for the privately derived classes rather than relying on the default.

---

### Question 6
**Q:** What is inherited constructors?  
**A:** Inherited constructors allow a derived class to inherit and reuse the constructors of its base class without explicitly redefining them.The derived class inherits all constructors of the base class, except:
- Copy constructor
- Move constructor
- Default constructor (if explicitly deleted in the base class)

---

### Question 7
**Q:** Why can we only use pointers (or references) to objects in containers when dealing with inheritance and polymorphism?  
**A:** We cannot put objects of types related by inheritance directly into a container, because there is no way to define a container that holds elements of different types. When a derived class object is stored in a container of base class objects, only the base part of the object is stored. The derived-specific members and behavior are "sliced off", leaving only the base portion. The [example](./src/container_inheritance.cpp) shows the slicing of the derived object and the right way to use container with inheritance.

---

### Question 8
**Q:** What is the order of destruction for inherited objects?  
**A:** The destructor for the derived class is called first and base class destrcutor is called last. Base classes usually should define a virtual destructor.