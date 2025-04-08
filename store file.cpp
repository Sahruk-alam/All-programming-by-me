#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main ()
{
    string name;
    int id;
    double cg;
    ofstream data;
    data.open("sahruk details.txt",ios::out|ios::app);
    cout<<"Enter name : ";
    getline(cin,name);
    data<<"Name : "<<name<<endl;
    cout<<"Enter ID : ";
    cin>>id;
    data<<"ID : "<<id<<endl;
    cout<<"Enter CG : ";
    cin>>cg;
    data<<"CGPA : "<<cg<<endl;
    cin.ignore();
    data.close();
 cout<<"Information stored";
    return 0;
}

