# Chapter 12 (Dynamic Memory)

## Overview

## Structure
1. [**Shared Pointer**](./src/shared_ptr.cpp)
2. [**Unique Pointer**](./src/unique_ptr.cpp)
3. [**Dynamic Arrays**](./src/dynamic_arrays)

## Q&A
### Question 1
**Q:** What is heap memory?  
**A:** The heap is a flexible memory pool used for dynamic memory allocation at runtime. It provides significant control but requires careful management to avoid memory leaks and other pitfalls. Modern C++ encourages using smart pointers and containers to simplify heap memory management.

---

### Question 2
**Q:** Why is dynamic memory allocation problematic?  
**A:** It is hard to ensure that the allocated memory is freed at the right time. Common problems with heap memory including memory leaks, dangling pointers, and fragmentation.

---

### Question 3
**Q:** What is memory leak?  
**A:** Forgetting to free the memory, where memory remains allocated even when no longer needed.

---

### Question 4
**Q:** What is dangling pointers?  
**A:** Dangling pointer is where accessing a memory after it has been freed.

---

### Question 5
**Q:** What is fragmentation?  
**A:** Allocating and deallocating blocks in a random order can leave the heap fragmented, reducing the available contiguous memory.

---

### Question 6
**Q:** What is smart pointer for?  
**A:** New library in C++ 11 provides two smart pointer types (`shared_ptr` and `unique_ptr`) that manage dynamic objects, to make using dynamic memory easier and safer.

| Smart Pointer   | Description                                          |
|-----------------|------------------------------------------------------|
| shared_ptr      | Allows multiple pointers to refer to the same object |
| unique_ptr      | owns the object to which it points                   |

---

### Question 7
**Q:** What is `weak_ptr`? Is it a smart pointer?  
**A:** `weak_ptr` is not a smart pointer, it is rather a companion class to `std::shared_ptr`. It is designed to provide non-owning, safe references to a managed object. It does not affect the reference count of the managed object and does not influence the destruction of the object.

---

### Question 8
**Q:** How does `shared_ptr` automatically destroys its object?  
**A:** When the last `shared_ptr` pointing to an object is destroyed, the `shared_ptr` class automatically destroys the object to which that `shared_ptr` points. It does so through a member function known as a **destructor**.

---

### Question 9
**Q:** When to use `std::unique_ptr`, raw dynamic pointers, or `std::vector`?  
**A:** 
- Use std::vector for most dynamic array use cases because of its safety and flexibility.
- Use std::unique_ptr if you need a fixed-size dynamic array with automatic cleanup.
- Avoid raw pointers unless absolutely necessary.
