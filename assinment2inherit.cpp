#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    Person(const string& name, int age) : name(name), age(age) {}

    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age <<endl;
    }

protected:
    std::string name;
    int age;
};

class Employee {
public:
    Employee(int employeeID, double salary) : employeeID(employeeID), salary(salary) {}

    void displayEmployee() {
        std::cout << "Employee ID: " << employeeID << ", Salary: $" << salary << std::endl;
    }

protected:
    int employeeID;
    double salary;
};

class Manager : public Person, public Employee {
public:
    Manager(const std::string& name, int age, int employeeID, double salary)
        : Person(name, age), Employee(employeeID, salary) {}

    void displayManager() {
        displayPerson();    // Access the displayPerson function from the Person base class
        displayEmployee();  // Access the displayEmployee function from the Employee base class
    }
};

int main() {
    Manager manager("John Doe", 35, 1001, 75000.0);
    manager.displayManager();

    return 0;
}
