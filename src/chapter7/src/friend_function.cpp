#include <iostream>

class Base {
    private:
        int private_variable;
    
    protected:
        int protected_variable;

    public:

        // Constructor
        // Initialize variables
        Base() {
            private_variable = 5;
            protected_variable = 10;
        }

        // Friend function declaration
        // Allows FriendFunction to access member of Base
        friend void FriendFunction(Base& obj);
};

// Friend function definition
void FriendFunction(Base& obj) {
    std::cout << "Private Variable: " << obj.private_variable << std::endl;
    std::cout << "Protected Variable: " << obj.protected_variable << std::endl;
}

int main() 
{
    // Create a Base object named object
    Base object;

    // Call the friend function with object as an argument
    FriendFunction(object);

    return 0;
}