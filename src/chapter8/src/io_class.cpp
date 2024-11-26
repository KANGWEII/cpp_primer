// Standard Library provides various I/O classes for input and output operations, organized under different headers.
// iostream: Provides classes for standard input/output operations (console I/O)
// fstream: Provides classes for file input/output operations
// sstream: Provides classes for in-memory string-based I/O

#include <iostream>
#include <fstream>
#include <sstream>

int main()
{
    /****************************************************************
     *                          iostream                            *
     ****************************************************************/
    std::cout << "iostream:" << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << "Enter your name: ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << "!\n" << std::endl;


    /****************************************************************
     *                          fstream                             *
     ****************************************************************/
    std::cout << "fstream:" << std::endl;
    std::cout << "----------------" << std::endl;
    std::ofstream outfile("example.txt");
    if (outfile.is_open()) {
        outfile << name;
        outfile.close();
        std::cout << "Data written to the file successfully.\n";
    } else {
        std::cerr << "Error opening file for writing.\n";
    }

    std::ifstream infile("example.txt"); 
    if (infile.is_open()) {
        std::string line;
        std::cout << "Reading from the file:\n";
        while (std::getline(infile, line)) {
            std::cout << line << std::endl;
        }
        std::cout << std::endl;
        infile.close();
    } else {
        std::cerr << "Error opening file for reading.\n";
    }


    /****************************************************************
     *                          sstream                             *
     ****************************************************************/
    std::string input = "Vanice 20 5.9";
    std::stringstream ss(input);

    int age;
    float height;

    ss >> name >> age >> height;

    std::cout << "sstream:" << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << " ft" << std::endl;

    return 0;
}