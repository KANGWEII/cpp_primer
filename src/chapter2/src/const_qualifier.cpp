#include <iostream>

/****************************************************************
 *                                                              *
 *                 Example 1.1 (Const Reference)                *    
 *                                                              * 
 ****************************************************************/

int main()
{
    int a = 5;
    const int& ref = a;

    a = 10; // Allowed
    // ref = 10;   // Error: assignment of read-only reference 'ref'
    
    return 0;
}

/****************************************************************
 *                                                              *
 *                 Example 2.1 (Const Reference)                *    
 *                                                              * 
 ****************************************************************/

// int main()
// {
//     // int& a = 5; // Error: invalid initialization of non-const reference
//     const int& a = 5;   // Allowed
    
//     return 0;
// }

/****************************************************************
 *                                                              *
 *              Example 3.1.1 (Pointer to const)                *    
 *                                                              * 
 ****************************************************************/

// int main()
// {
//     const int a = 5;
//     const int b = 10;
//     const int* ptr = nullptr;

//     ptr = &a;   // Points to the address of a
//     // *ptr = 10;   // Error: assignment of read-only location '* ptr'

//     ptr = &b;   // Allowed: Points to different address
//     // *ptr = 5;   // Error

//     return 0;
// }

/****************************************************************
 *                                                              *
 *               Example 3.2.1 (Const Pointer)                  *    
 *                                                              * 
 ****************************************************************/

// int main()
// {
//     int a = 5;
//     int b = 10;

//     int* const ptr = &a;   // Points to the address of a

//     *ptr = 10;   // Allowed
//     // ptr = &b;   // Error: assignment of read-only variable 'ptr'

//     return 0;
// }

/****************************************************************
 *                                                              *
 *             Example 3.3.1 (Const Pointer to Const)           *    
 *                                                              * 
 ****************************************************************/

// int main()
// {
//     const int a = 5;
//     const int b = 10;

//     const int* const ptr = &a;   // Points to the address of a

//     // *ptr = 10;   // Error
//     // ptr = &b;   // Error

//     return 0;
// }

/****************************************************************
 *                                                              *
 *                   Example 4.1 (constexpr)                    *    
 *                                                              * 
 ****************************************************************/

// int main()
// {
//     int unknowRuntime = 5;    // unknowRuntime is not known at compile time
//     const int knownRuntime = 5; // knownRuntime is known at compile time

//     const int a = unknowRuntime;
    
//     // constexpr int b = unknowRuntime;  // Error
//     constexpr int c = knownRuntime;  // Allowed

//     return 0;
// }