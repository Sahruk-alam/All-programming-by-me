#include<iostream>
using namespace std;
class student
{
protected:
    double pi=3.1416;
public:
    int x,y;
    double getv()
    {
        cout <<"Enter value of x & y : ";
        cin>>x>>y;
    }
    double setv()
    {
        cout<<"Value of x :"<<x<<endl;
        cout<<"Value of y :"<<y<<endl;
    }

};
class boyz
{
public:
    int x=2,y=3;
   void addi()
    {
        cout <<"Additional value: ";
        cout<< x+y<<endl;
    }
};
class girl
{
    int x=6,y=1;
public:
    void subs()
    {
        cout<<"Substruction : ";
        cout<< x-y<<endl;
    }
};
class control : public student,public boyz,public girl
{
public:
    int x=5,y=2;
    void mean()
    {

        getv();
        setv();
        addi();
        subs();


cout <<"All sequance : ";
        cout<< pi*x*y;
}
};

int main ()
{

    control b1;
    b1.mean();
    return 0;
}
