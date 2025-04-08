#include<iostream>
using namespace std;

int main()
{
    int a;
    float f;
    char ch;
    char name[20];
    int x=sizeof(name);
    cout<<x<<endl;

    //comma(,) operator
    int y,z,t;
    t=(y=2,z=5,t=y+z);
    cout <<t;

    return 0;
}
