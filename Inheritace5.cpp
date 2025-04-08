#include<iostream>
using namespace std;
class person
{
public:

    void personinfo( string name,int age)

    {
        cout <<"Name: "<<name<<endl;
        cout <<"Age: "<<age<<endl;
    }

};
class employee
{
public:
    void employeeinfo(int id,double salary)
    {
        cout <<"ID: "<<id<<endl;
        cout <<"Salary: "<<salary<<endl;
    }
};
class manager :public person,public employee
{
public:

    void managerinfo()
    {
        cout <<"Manager Information"<<endl<<endl;

        personinfo("sahruk alam",20);
        employeeinfo(231311025,500000);
    }
};
int main()
{
    manager obj;
    obj.managerinfo();

    return 0;
}

