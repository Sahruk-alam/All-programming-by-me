#include<iostream>
using namespace std;
 struct student_information
{
    int id;
    string str;
};
int main ()
{
    student_information *st =new student_information;// for string use
    cout<<"Enter the name : ";
    cin>>st->str;
    cout<<"Enter the Id : ";
    cin>>st->id;
    cout<<"Name : "<<st->str<<endl;
    cout<<"ID   : "<<st->id;
    return 0;
}
