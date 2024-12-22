#include <iostream>
#include <string>

class Employee {
 protected:
  std::string name;
  int id;

 public:
  // Constructor
  Employee(const std::string& emp_name, int emp_id)
      : name(emp_name), id(emp_id) {}

  // Virtual function
  virtual void display() const {
    std::cout << "Employee name: " << name << std::endl;
    std::cout << "Employee ID: " << id << std::endl;
  }

  // Virtual destructor
  virtual ~Employee() {}
};

class Developer : public Employee {
 private:
  std::string prog_language;
  int exp_yrs;

 public:
  // Constructor
  Developer(const std::string& dev_name, int dev_id, std::string dev_lang,
            int dev_exp)
      : Employee(dev_name, dev_id), prog_language(dev_lang), exp_yrs(dev_exp) {}

  // Override virtual function
  void display() const override {
    Employee::display();
    std::cout << "Programming Language: " << prog_language << std::endl;
    std::cout << "Years of experience: " << exp_yrs << std::endl;
  }
};

class Business : public Employee {
 private:
  int sales_order;

 public:
  // Constructor
  Business(const std::string& buss_name, int buss_id, int buss_sales)
      : Employee(buss_name, buss_id), sales_order(buss_sales) {}

  // Override virtual function
  void display() const override {
    Employee::display();
    std::cout << "Number of sales closed: " << sales_order << std::endl;
  }
};

int main() {
  Developer dev("KW", 30759218, "C++", 5);
  Business sales("Rachel", 27819327, 69);
  Employee* emp;

  emp = &dev;
  std::cout << "Developer: " << std::endl;
  emp->display();

  emp = &sales;
  std::cout << "\nBusiness: " << std::endl;
  emp->display();

  return 0;
}

// Why base class pointer (Employee*) is used?

// 1. You lose the ability to write code that works with a mix of derived
// objects. At runtime, the actual type of the object determines which method is
// called. This is known as runtime polymorphism (dynamic dispatch). You are not
// locked into calling methods specific to a type at compile time.

// 2. You cannot easily use algorithms or functions that operate generically on
// the base class type.

// 3. The behavior is statically bound at compile time, so you lose runtime
// flexibility.
