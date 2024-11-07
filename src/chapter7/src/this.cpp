#include <iostream>

class MyClass {
public:
    int x;
    
    // Constructor where parameter 'x' is the same as the member variable 'x'
    MyClass(int x) {
        this->x = x;  // 'this->x' refers to the member variable, 'x' refers to the parameter
    }

    void print() {
        std::cout << "x = " << this->x << std::endl; // No ambiguity here, so this->x is optional
    }
};

int main() 
{
    MyClass obj(10);
    obj.print();  // Outputs: x = 10

    return 0;
}

// Constructor: "this" is used to disambiguate between constructor parameters and member variables.
// Assignment Operator: "this" helps avoid self-assignment.
// Polymorphism: "this" refers to the actual object calling a method, enabling polymorphic behavior.

// Use this:
//  - When there’s a name conflict between parameters and member variables.
//  - When you need to return the current object (e.g., for method chaining).
//  - In const member functions to refer to the current object as a pointer to const.
//  - When accessing the address of the object (this).

// Don’t Use this:
//  - When there is no ambiguity between parameters and member variables.
//  - In static member functions, where there is no instance of the class.
//  - When using this makes the code less readable or unnecessarily verbose.
//  - In simple getter/setter methods if there is no ambiguity.




// The example below provides the regular class method without this

// class MyClass {
// public:
//     int x;
    
//     MyClass(int test) {
//         x = test;
//     }

//     void print() {
//         std::cout << "x = " << this->x << std::endl;
//     }
// };

// int main() 
// {
//     MyClass obj(20);
//     obj.print();

//     return 0;
// }