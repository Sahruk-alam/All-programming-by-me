#include<iostream>
using namespace std;
class vehicle
{
public:
    int a;
    vehicle()
    {
      cout <<"The base class of vehicle"<<endl;
    }
};
class tata
{
    public:
    int b;
    tata()
    {
     cout<<"Second base class of tata"<<endl;
    }

};
class bus
{
public:
    int c;
     bus()
    {
     cout<<"3rd class bus"<<endl;
    }

};
class modify : public vehicle,public tata,public bus
{
public:

    modify()
    {
cout <<"Sub class"<<endl;
    }
void display()
{

    cout <<a<<"  "<<b<<endl;
}

};

int main()
{
    int a,b;
    cout <<"the value of a and b :"<<endl;
    cin>>a>>b;
    modify obj;
    obj.a=a;
    obj.b=b;
    obj.display();


        return 0;
}
