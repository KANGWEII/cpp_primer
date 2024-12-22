#include <iostream>

class BankAccount {
private:
    // Private member variable, encapsulated within the class
    double balance;

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;  // Set to zero if initial balance is invalid
            std::cout << "Initial balance cannot be negative. Setting balance to 0.\n";
        }
    }

    // Public method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << ". New balance: $" << balance << "\n";
        } else {
            std::cout << "Deposit amount must be positive.\n";
        }
    }

    // Public method to check the balance
    double getBalance() const {
        return balance;
    }
};

int main() {
    // Create a BankAccount object with an initial balance
    BankAccount account(100);

    // Access and modify the account through public methods
    account.deposit(50);       // Deposits $50
    std::cout << "Current balance: $" << account.getBalance() << "\n";

    return 0;
}