# Chapter 4 (Basic Concepts)

## Structure
1. [**Lvalue, Rvalue**](./src/lvalue_rvalue.cpp)

## Q&A
### Question 1
**Q:** What is lvalue?  
**A:** An lvalue (locator value) refers to an object that persists in memory and has a name or address that can be accessed. In simpler terms, it’s something that exists beyond the scope of the current expression and can appear on the left-hand side of an assignment.
- Has an identifiable memory location (an object with storage).
- Can appear on both the left and right sides of an assignment.

---

### Question 2
**Q:** What is a rvalue?  
**A:** An rvalue (read value) refers to a temporary value that does not persist beyond the expression in which it is used. It typically represents data rather than an object, and it cannot appear on the left-hand side of an assignment.
- Does not have a persistent memory address.
- Can only appear on the right-hand side of an assignment.
- Includes temporary objects, literals, and the return values of functions.

---

### Question 3
**Q:** What is lvalue reference?  
**A:** A reference that binds to an lvalue, which is a persistent object in memory. An lvalue reference is declared using the & symbol, and it allows you to alias an existing variable without creating a copy.
```bash
int x = 10;        // 'x' is an lvalue
int& ref = x;      // 'ref' is an lvalue reference to 'x'
```

---

### Question 4
**Q:** What is rvalue reference?  
**A:** A reference type that can bind to rvalues (temporary objects). Rvalue references are declared using &&.
```bash
int x = 10;        // 'x' is an lvalue
int&& rref0 = x;   // Error: cannot bind an rvalue reference to lvalue 
int&& rref1 = 10;  // 'rref' is an rvalue reference to the temporary value
```

---