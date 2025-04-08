#include<iostream>
#include<fstream>
using namespace std;

int main()
{
       string name;
int age;
ofstream file;
file.open("sample.txt");

cout <<"Enter the name : ";
getline(cin,name);
file<<"Name is : "<<name<<endl;

cout <<"Enter the age : ";
cin>>age;
file<<"Age is : "<<age<<endl;
cin.ignore();
file.close();



return 0;
}
