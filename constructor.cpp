#include<iostream>
using namespace std;
class student
{
private:
    int id;
public:
    float cg;
    string ch;
    student()  // defoult constructor
    {
        id= 0;
        cg=0;
        cout <<"fuck code"<<endl;
    }

    void display()
    {
        cout <<"ID : "<<id<<"  "<<"CGPA : "<<cg<<"  "<<"Name : "<<ch<<endl;
    }

    student(int x,float y,string z)  //parameter constructor
    {
        id=x;
        cg=y;
        ch=z;

    }
};
int main()
{
    student ob;
    student obj(25947,3.56,"sahruk alam");
    obj.display();
    student obj1(231311,3.256,"Alam");
    obj1.display();

    return 0;
}
