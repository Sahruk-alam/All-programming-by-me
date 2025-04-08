#include <iostream>
using namespace std;

int main ()
{
    double base, height, area;
    float p; // Use a double here for the division result
    p = 1.0/2.0; // Perform division with floating-point numbers

    cout << "Enter base = ";
    cin >> base;

    cout << "Enter height = ";
    cin >> height;

    area = p * base * height;
    cout << "Area of triangle = " << area;

    return 0;
}
