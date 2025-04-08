#include<iostream>
using namespace std;
double add(int x )
{
    cout <<"The first number : "<<x<<endl;

}
double add(int x, double y)
{
    cout<<"Second : ";
    return x+y;
}
void add(int x, int y)
{
    cout<<"Third : "<<x-y;

}


int main()
{

    add(6);
    double r;
    r=add(2,3.5);
    cout<<r<<endl;
    add(5,6);
    return 0;
}
