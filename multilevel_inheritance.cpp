#include<iostream>
using namespace std;
class A
{
public:
    int roll;
    void display1()
    {
        cout<<"Their roll is : "<<roll<<endl;
    }
};
class B : public A
{
public:
    float cg;
    void display2()
    {
        cout<<"Reult is : "<<cg<<endl;
        display1();
    }
};
class C : public B
{
    public :
    string name ;
     void display()
    {
        cout<<"Name is : "<<name<<endl;
        display2();
    }
};
int main()
{
    C obj;
    obj.roll=231311;
    obj.cg=3.36;
    obj.name="sahruk alam";
    obj.display();
    return 0;
}
