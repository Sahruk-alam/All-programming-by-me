#include <iostream>
using namespace std;
class Circle {
private:
    double radius;

public:

    Circle(double r) {
        radius = r;
    }


    double Area() {
        return 3.14159 * radius * radius;
    }


    double Circumference() {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    double radius;

    cout << "Enter the radius: ";
    cin >> radius;

    Circle circle(radius);

    cout << "Area of circle: " << circle.Area() << endl;
    cout << "Circumference of circle: " << circle.Circumference() <<endl;

    return 0;
}
