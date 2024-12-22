#include <iostream>

// Base class definition
class Base {
    private:
        int private_variable;
    
    protected:
        int protected_variable;

    public:
        // Constructor to initialize member variables
        Base() {
            private_variable = 5;
            protected_variable = 10;
        }
    
    // Friend class declaration
    friend class FriendClass;
};

// FriendClass definition
class FriendClass {
    public:
        // Function to print private and protected variables of Base class
        void print(Base& obj) {
            std::cout << "Private Variable: " << obj.private_variable << std::endl;
            std::cout << "Protected Variable: " << obj.protected_variable << std::endl;
        }
};

int main()
{
    Base object; // Create an object of Base class
    FriendClass FC; // Create an object of FriendClass
    
    FC.print(object); // Call print function of FriendClass to print Base class variables

    return 0;
}