#include <iostream>
using namespace std;
class Complex {
private:
int real, imag;
public:
Complex(int r , int i )
{
real = r;
imag = i;
}

Complex operator+(Complex const& obj)
{

real = real + obj.real;
imag = imag + obj.imag;
//return real;
}
void print() { cout << real << " + i" << imag << endl; }
};
int main()
{
Complex c1(10, 5), c2(2, 4);

Complex c3 = c1 + c2;
c3.print();
}
