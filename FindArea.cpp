#include <iostream>
using namespace std;

int main ()
{
    double base, height, area,a,b,h,x,r;
    float p;
    p =(double) 1/2;

    cout << "Enter base = ";
    cin >> base;

    cout << "Enter height = ";
    cin >> height;

    area = p * base * height;
    cout << "Area of triangle = " << area<<endl;
    cout <<"trapezoid Area= "<<endl;

    cin>>a;
    cin>>b;
    cin>>h;
    x=a+b;
    area = p*x*h;
    cout<< area<<endl;
    cout << "circle area= ";
    float pi = 3.1416;
    cin>> r;
    area= pi*r*r;
    cout<< area;
    return 0;
}
