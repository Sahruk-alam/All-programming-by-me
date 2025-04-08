#include<iostream>
using namespace std;
class student
{
private:
    int a;
    int b;
public :
    student()
    {
        a=0;
        b=0;
        cout <<" constructor"<<endl;

    }
     ~student()
    {
        a=2;
        b=1;
        cout <<" destructor"<<endl;

    }
    void display()
    {
        cout <<a<<"  "<<b <<endl;
    }

};
int main()
{
student ob;
ob.display();

    return 0;
}
