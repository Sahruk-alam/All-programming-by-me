#include<iostream>
using namespace std;

class person
{
public:

    int id;
    string name;
    void display()
    {
        cout <<"ID : "<<id<<endl;
        cout <<"Name : "<<name<<endl;

    }
};
class student : public person
{
public:
    float cg;
    void display1()
    {
        cout <<"GPA : "<<cg<<endl;
        //display();
    }

};
int main ()
{
    student obj;
    obj.id=132311;
    obj.name="sahruk alam";
    obj.cg =3.247;
      obj.display();
    obj.display1();


    return 0;
}
