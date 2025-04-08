#include<iostream>
#include<fstream>
using namespace std;
 int main ()
{
 ofstream file;

 file.open("student.txt");
 file<<"I am from bagmara in rajshahi";
 file.close();
cout<<"Data is stored";

 return 0;
 }
