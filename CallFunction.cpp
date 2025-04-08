#include<iostream>
using namespace std;
double sample(double x,double y)
{
    return x+y;
}
int simple()
{
    return 4+13 ;
}
void some(string name)
{
    cout<<"Name is : "<<name<<endl;
}
void test()
{
    cout<<"NO return no argument";
}
int main()
{
    int result=sample(5,6);
    cout<<"Addition : "<<result<<endl;
    int k=simple();
    cout<<" Decition : "<<k<<endl;
    some("Alam");
    test();
    return 0;
}

