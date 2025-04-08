#include <iostream>

class Test {
private:
    int a;
    int b;

public:
    // Constructor to initialize the private variables
    Test(int x, int y) : a(x), b(y) {}

    // Overloading addition operator
    Test operator+(const Test& other) {
       Test result(a + other.a, b + other.b);
        return result;
    }

    // Overloading subtraction operator
    Test operator-(const Test& other) {
        Test result(a - other.a, b - other.b);
        return result;
    }

    // Overloading multiplication operator
    Test operator*(const Test& other) {
        Test result(a * other.a, b * other.b);
        return result;
    }

    // Overloading division operator
    Test operator/(const Test& other) {
        // Assuming division is well-defined for the given problem
        Test result(a / other.a, b / other.b);
        return result;
    }

    // Display function to print the values of private variables
    void display() const {
        std::cout << "a: " << a << ", b: " << b << std::endl;
    }
};

int main() {
    // Creating two objects of the Test class
    Test obj1(10, 5);
    Test obj2(3, 2);

    // Performing operations using overloaded operators
    Test resultAddition = obj1 + obj2;
    std::cout << "Addition result: ";
    resultAddition.display();

    Test resultSubtraction = obj1 - obj2;
    std::cout << "Subtraction result: ";
    resultSubtraction.display();

    Test resultMultiplication = obj1 * obj2;
    std::cout << "Multiplication result: ";
    resultMultiplication.display();

    Test resultDivision = obj1 / obj2;
    std::cout << "Division result: ";
    resultDivision.display();

    return 0;
}
