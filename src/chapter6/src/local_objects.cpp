#include <iostream>

// This function defines a local static variable stat which is initialized to 0 only once.
int static_obj()
{
    // Each time the function is called, stat is incremented by 1 and its new value is returned.
    // The static variable retains its value between function calls.
    static int stat = 0;
    return ++stat;
}

// This function defines a local automatic variable aut which is initialized to 0 every time the function is called.
int automatic_obj()
{
    // Each time the function is called, aut is incremented by 1 and its new value is returned.
    // The automatic variable does not retain its value between function calls.
    // Automatic variable is automatically created when the function or block is entered and destroyed when the function or block is exited.
    int aut = 0;
    return ++aut;
}

int main()
{
    for (int i = 0; i < 10; ++i)
    {
        std::cout << "Local Static Object: " << static_obj() << std::endl;
    }

    for (int i = 0; i < 10; ++i)
    {
        std::cout << "Automatic Object: " << automatic_obj() << std::endl;
    }

    return 0;
}