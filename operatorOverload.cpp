#include<iostream>
using namespace std;
class test
{
    int real,imag;
public:
    test(int r=0,int i=0)
    {
        real=r;
        imag=i;
    }
    test operator +( const test& obj)
    {
        test temp;
        temp.real=real+obj.real;
        temp.imag=imag+obj.imag;
        return temp;
    }
    void display()
    {
        if(imag<0)
        {
            cout<<"The complex number : "<<real <<imag<<"i";
        }
        else
        {
            cout<<"The complex number : "<<real<<"+"<<imag<<"i";
        }
    }
};


int main()
{
    test t1(5,6),t2(3,8),t3;
    t3=t1+t2;
    t3.display();

    return 0;
}
