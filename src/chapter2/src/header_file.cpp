#include <iostream>
#include "chapter2/header_file.hpp"

int add(int a, int b)
{
    MyStruct myStruct;

    myStruct.x = a;
    myStruct.y = b;

    return myStruct.x + myStruct.y;
}

int main()
{
    int sum = add(5, 10);

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}