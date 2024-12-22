#include <iostream>

/****************************************************************
 *                                                              *
 *                  Example 1.1 (Reference)                     *    
 *                                                              * 
 ****************************************************************/

int main()
{
    int a = 5;
    int& ref = a;

    std::cout << "ref: " << ref << std::endl;   // ref: 5
    
    return 0;
}

/****************************************************************
 *                                                              *
 *                  Example 1.2 (Reference)                     *    
 *                                                              * 
 ****************************************************************/

// int main()
// {
//     int a = 5;
//     int& ref = a;

//     ref = 10;

//     std::cout << "a: " << a << std::endl;       // a: 10
//     std::cout << "ref: " << ref << std::endl;   // ref: 10
    
//     return 0;
// }

/****************************************************************
 *                                                              *
 *                   Example 2.1 (Pointer)                      *    
 *                                                              * 
 ****************************************************************/

// int main()
// {
//     int* ptr = nullptr;   // Pointer declaration (initialization to nullptr)
//     int a = 5;  

//     ptr = &a;   // Points to the address of a

//     std::cout << "ptr: " << *ptr << std::endl;   // ptr: 5
    
//     return 0;
// }

/****************************************************************
 *                                                              *
 *                   Example 2.2 (Pointer)                      *    
 *                                                              * 
 ****************************************************************/

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int* ptr = arr;   // Points to the first element of the array

//     std::cout << "ptr: " << *ptr << std::endl;   // ptr: 1

//     ptr++;   // Points to the next element of the array

//     std::cout << "ptr: " << *ptr << std::endl;   // ptr: 2
//     std::cout << "ptr: " << *(ptr + 1) << std::endl;   // ptr: 3

//     return 0;
// }

/****************************************************************
 *                                                              *
 *                   Example 2.3 (Pointer)                      *    
 *                                                              * 
 ****************************************************************/

// int main()
// {
//     double a = 5.5;
//     int b = 10;
//     void* void_ptr = nullptr;

//     void_ptr = &a;
//     std::cout << "void_ptr: " << *static_cast<double*>(void_ptr) << std::endl;   // void_ptr: 5.5

//     void_ptr = &b;
//     std::cout << "void_ptr: " << *static_cast<int*>(void_ptr) << std::endl;   // void_ptr: 10
    
//     return 0;
// }

/****************************************************************
 *                                                              *
 *                   Example 2.4 (Pointer)                      *    
 *                                                              * 
 ****************************************************************/

// int main()
// {
//     int a = 5;
//     int* ptr = &a;
//     int** ptr_ptr = &ptr;

//     std::cout << "ptr_ptr: " << *ptr_ptr << std::endl;    // ptr_ptr: 0x7fffbf7b3f7c (Address of ptr)
//     std::cout << "ptr_ptr: " << **ptr_ptr << std::endl;   // ptr_ptr: 5

//     int* ptr2 = nullptr;
//     int*& ref = ptr2;      // ref is a reference to a pointer (ptr2)

//     ref = &a;   // Makes ptr2 point to address of a
//     std::cout << "ref: " << *ref << std::endl;   // ref: 5
    
//     *ref = 10;
//     std::cout << "a: " << a << std::endl;   // a: 10

//     return 0;
// }

/****************************************************************
 *                                                              *
 *              Example 2.4 (Pointer to Array)                  *    
 *                                                              * 
 ****************************************************************/

// void greet() 
// {
//     std::cout << "Hello World!" << std::endl;
// }

// int main() 
// {
//     void (*funcPtr)();

//     // Assign the function's address to the pointer
//     funcPtr = &greet; // OR funcPtr = greet;

//     // Call the function using the pointer
//     (*funcPtr)();

//     return 0;
// }