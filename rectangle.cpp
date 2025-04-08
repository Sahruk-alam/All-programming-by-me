#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;

public:

    Rectangle(double l, double w) {
        length = l;
        width = w;
    }


    double Area() {
        return length * width;
    }

    double Perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    double length, width;

    cin >> length;

    cin >> width;

    Rectangle rectangle(length, width);

    cout << "Area of rectangle: " << rectangle.Area() << endl;
    cout << "Perimeter of rectangle: " << rectangle.Perimeter() <<endl;

    return 0;
}
