#include<iostream>
using namespace std;
struct student
{
    int id;
    char name[20] ;
    double cg;
    int a=2,b=6;
    float sum=a+b;

};
 int main ()
 {
     struct student obj;
     cout<<"Enter your name : ";
     cin>>obj.name;
     cout<<"Enter the ID number : ";
     cin>>obj.id;
     cout<<"Enter the CGPA : ";
     cin>>obj.cg;
     cout<<"Name : "<<obj.name<<endl;
     cout<<"ID : "<<obj.id<<endl;
     cout<<"CGPA : "<<obj.cg<<endl;
     cout<<"value of sum a b "<<obj.sum;
     return 0;
 }

