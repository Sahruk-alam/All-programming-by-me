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
        cout <<"Defoult constructor"<<endl;
    }
    void display()
    {
        cout <<a<<"  "<<b <<endl;
    }
    student(int x,int y)
    {
         cout <<"parameter constructor"<<endl;
      a=x;b=y;

    }
student(student&  obje)   //copy constructor
{
    cout<<"copy constructor"<<endl;
   a=obje.a;
   b=obje.b;
}


};
int main()
{
student ob;
ob.display();

student obj(23,20);
obj.display();

student obj1(ob);
obj1.display();

student obj2(obj);
obj2.display();
    return 0;
}
