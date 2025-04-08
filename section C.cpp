#include <iostream>
#include <cmath>
using namespace std;
class Triangle {
private:
    double side1, side2, side3;

public:
  double setvalue(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    double Area() {

        double s = (side1 + side2 + side3) / 2.0;
        double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
        return area;
    }

    double Perimeter() {
        double perimeter = side1 + side2 + side3;
        return perimeter;
    }
    double display()
    {
      cout << "Area of the triangle: " << Area() << endl;
      cout << "Perimeter of the triangle: " << Perimeter() << endl;
    }
};

int main() {

    Triangle obj1;

    obj1.setvalue(3.0, 4.0, 5.0);
    obj1.display();

    return 0;
}
