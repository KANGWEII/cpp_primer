#include <iostream>

// Pass by value
// Argument value is a copied, the parameter and argument are independent objects
void passByValue(int val)
{
    val = 100;
}

// Pass by reference
// Reference parameter is an alias for the object to which it is bound
void passByReference(int& ref)
{
    ref = 100;
}

// Pass by pointer
// Points to the memmory address, dereference to change the value
void passByPointer(int* ptr)
{
    *ptr = 100;
}

int main()
{
    int a = 10;
    int b = 10;
    int c = 10;

    passByValue(a);
    std::cout << "Value: " << a << std::endl;

    passByReference(b);
    std::cout << "Value: " << b << std::endl;

    passByPointer(&c);
    std::cout << "Value: " << c << std::endl;
}

// Reference parameters that are not changed inside a function should be references to const
// Use references when you want to ensure the argument is not null, for simplicity, safety, and readability.
// Use pointers when you need to handle optional arguments, dynamic memory, arrays, or multiple levels of indirection.