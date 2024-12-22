#include <iostream>
#include <string>

// Abstract class
// It hides the complex implementation details and exposes only the necessary features or behaviors.
class PaymentMethod {
public:
    virtual void pay(double amount) const = 0;  // Abstract payment method
    virtual ~PaymentMethod() = default;
};

// Derived class 1: CreditCard
class CreditCard : public PaymentMethod {
public:
    void pay(double amount) const override {
        std::cout << "Paying " << amount << " using Credit Card.\n";
    }
};

// Derived class 2: PayPal
class PayPal : public PaymentMethod {
public:
    void pay(double amount) const override {
        std::cout << "Paying " << amount << " using PayPal.\n";
    }
};

int main() 
{
    PaymentMethod* payment1 = new CreditCard();
    PaymentMethod* payment2 = new PayPal();

    payment1->pay(100.50);
    payment2->pay(75.25);

    delete payment1;
    delete payment2;

    return 0;
}