#include<iostream>
using namespace std;
class student
{
public :
    int id;
    double gpa ;
    string name;
    void display()
    {
        cout <<"this id is: "<<id<<endl;
        cout <<"the gpa :"<<gpa<<endl;
        cout <<"the name by :"<<name<<endl;
    }
    void setvalue(int x,double y,string z)
    {
       id=x;
        gpa=y;
        name=z;
    }
};

int main ()
{
    student alam, kalam;

    alam.setvalue(23021,3.265,"sahruk alam");
    alam.display();
    kalam.setvalue(52141,3.345,"Kalam uddin");
    kalam.display();
    return 0;
}
