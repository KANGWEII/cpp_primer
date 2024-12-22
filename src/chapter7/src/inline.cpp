#include <iostream>

/****************************************************************
 *                                                              *
 *                Example 1 (Inline Function)                   *    
 *                                                              * 
 ****************************************************************/

inline int sum(int a, int b) {
    return a + b;
}

int main()
{
    std::cout << "Sum: " << sum(8, 10) << std::endl; 
    
    return 0;
}

/****************************************************************
 *                                                              *
 *                  Example 2 (Inline Class)                    *    
 *                                                              * 
 ****************************************************************/

// class Sum {
//     public:
//         int a;
//         int b;
//         void get();
//         void add();
// };

// inline void Sum::get() {
//     std::cout << "a: ";
//     std::cin >> a;
//     std::cout << "b: ";
//     std::cin >> b;
// }

// inline void Sum::add() {
//     std::cout << "Sum: " << a + b << std::endl;
// }

// int main()
// {
//     Sum operation;
//     operation.get();
//     operation.add();

//     return 0;
// }