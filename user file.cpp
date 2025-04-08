#include<iostream>
#include<fstream>
using namespace std;

int main()
{
string name;
int age;
ofstream file;
file.open("sample.txt",ios::out|ios::app);
cout <<"Enter the name : ";
getline(cin,name);
file<<"Name is : "<<name;

cout <<"Enter the age : ";
cin>>age;
file<<"Age is : "<<age;
cin.ignore();
file.close();


return 0;
}
