# Chapter 16 (Templates and Generic Programming)

## Structure
1. [**Function Template**](./src/function_template.cpp)
2. [**Class Template**](./src/class_template.cpp)
3. [**Variadic Template**](./src/variadic_template.cpp)

## Q&A
### Question 1
**Q:** What is function template?  
**A:** A blueprint for creating functions that work with any data type. Instead of writing separate functions for each data type, a single function template can be used to generate type-specific functions automatically.
```bash
Syntax:

template <typename T>
T add(T a, T b) {
    return a + b;
}
```

---

### Question 2
**Q:** What is template instantiation?  
**A:** Process by which the compiler generates concrete functions or classes from templates by replacing the template parameters (`T`) with specific types. This occurs during the compilation phase when a template is used in code with specific type arguments.
```bash
int sum = add<int>(3, 5);       // Explicit instantiation for int
float result = add(3.5f, 2.5f); // Implicit instantiation for float
```

---

### Question 3
**Q:** What is class template?  
**A:** A blueprint for creating classes that work with any data type. Similar to function templates, class templates enable you to write generic and reusable code. However, instead of working with functions, class templates allow the creation of generic classes that can handle a variety of data types.
```bash
Syntax:

template <typename T>
class ClassName {
   // Member variables and methods
};
```

---

### Question 4
**Q:** What is variadic template?  
**A:** A type of template that can accept a variable number of arguments. Variadic templates are often used to create flexible and reusable code that can work with a variety of argument lists.