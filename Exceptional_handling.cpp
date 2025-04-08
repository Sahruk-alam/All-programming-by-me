#include<iostream>
using namespace std;

int main ()
{


try{
 int x,y;
cout<<"Enter two number : ";
cin >>x>>y;

if(y==0)
{
   throw 1;
}
else {

     cout<<" Divide : "<<x/y;
}

}
catch (...)
{
    cout <<" ?? 0 is unvaild number !!";
}
return 0;
}
