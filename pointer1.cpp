#include<iostream>
using namespace std;
int main ()
{
    int x,*pc,n;
    cout<<"Address of &x :"<<&x<<endl;
   cout<<"Address of &pc :"<<&pc<<endl;
    x=6;
    pc=&x;
    cout<<"Address of x :"<<&x<<endl;
    cout<<"Address of pc :"<<pc<<endl;
    x=44;
      pc=&x;
     cout<<"Pointer of *pc :"<<*pc<<endl;
     cout<<"Pointer of &pc :"<<&x<<endl;
     cout<<"Address of &pc :"<<&pc<<endl;
     cout<<"Address of pc :"<<pc<<endl<<endl;
     int a,b,*p1 ,*p2,sum ;
     p1=&a;
     p2=&b;
     cout<<"Enter a and b value : ";
     cin>>a>>b;
     sum=*p1+*p2;
     cout<<"\nSumation of a and b : "<<sum;

     cout<<"\nThe value :"<<"a= "<<a<<" b="<<b;
     int temp=*p1;
     *p1=*p2;
     *p2=temp;
     cout<<"\nSwaping the value : "<<"a= "<<a<<" b="<<b;
         return 0;
}
