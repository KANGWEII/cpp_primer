#include <iostream>

// Method chaining is primarily a design choice that can make the code more readable and expressive

class Employee {
    private:
        std::string name;
        
    public:
        Employee(std::string n) // Takes in parameter n
            : name(n) {}        // Initializes name member variable with the value of n using initializer list

        Employee& ClockedIn() {
            std::cout << name << " clocked in" << std::endl;

            return *this;
        }

        Employee& ClockedOut() {
            std::cout << name << " clocked out" << std::endl;

            return *this;
        }
};

int main() 
{
    Employee obj("Tomato");         // Create Employee object with name
    obj.ClockedIn().ClockedOut();

    return 0;
}