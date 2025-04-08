#include<iostream>
using namespace std;
class shape
{
public:
    int r,l,w;
    double pi= 3.1416;
    void cir()
    {
        cout <<"Enter radius value : ";
        cin>> r;
    }
    void rect()
    {
        cout <<"Enter lenght and width value is : ";
        cin>>l>>w;
    }

};
class circle :public shape
{
public:
    void get_circle()
    {
        cout<<"The Circle is : "<<(pi*r*r)<<endl;
    }
};
class rectangle : public shape
{
public:
    void get_rectangle()
    {
        cout <<"The Rectangle is : "<<(l*w);
    }
};
int main ()
{
    circle ob;
    ob.cir();
    ob.get_circle();

    rectangle r1;
    r1.rect();
    r1.get_rectangle();
    return 0;
}
