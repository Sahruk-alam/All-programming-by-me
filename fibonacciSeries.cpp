#include <iostream>
using namespace std;
int main()
{
  int x=1,y=1,z,i,num;
 cout<<"Enter the number : ";
 cin>>num;
  cout<<"Fibonaccci series : ";
 cout<<x<<" "<<y<<" ";
 for(i=2;i<num;i++)
 {
  z=x+y;
  cout<<z<<" ";
  x=y;
  y=z;
 }
   return 0;
   }
