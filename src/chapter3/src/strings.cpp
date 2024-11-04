#include <iostream>
#include <string>
#include <cctype>

/****************************************************************
 *                                                              *
 *                     Example 1 (getline)                      *    
 *                                                              * 
 ****************************************************************/

// int main()
// {
//     std::string word;

//     std::cout << "Enter a word: ";

//     if (getline(std::cin, word))
//     {
//         std::cout << "You Entered: " << word << std::endl;
//     }

//     return 0;
// }

/****************************************************************
 *                                                              *
 *                      Example 2 (cctype)                      *    
 *                                                              * 
 ****************************************************************/
    
int main()
{
    if (std::isalnum('a'))
    {
        std::cout << "The character is alphanumeric" << std::endl;
    }

    return 0;
}