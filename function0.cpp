#include<iostream>
using namespace std;

int x,y,z,k,w;
int largest()
{
    cout <<"Big number of user uses"<<endl<<endl;
}

int largest1 (int x,int y)
{
    int m=(x>y)?x:y;
    return m;
}
int largest2 (int x,int y,int z)
{
    int n= (x>y && x>z)? x:(y>z)?y:z ;
    return n;
}
int largest3 (int x,int y,int z,int k)
{
    int h= (x>y && y>z && z>k)? x:( y>z && y>k)?y:(z>k)?z:k;
    return h;
}
int main ()
{
    largest();

     while(1)
    {

    int choice,r,p,q;

    cout <<"Numbering process : ";
    cin>> choice;

    switch(choice)
    {
case 1:
   cout << "Enter the number 1"<<endl;
   cin >> x>> y ;
    r=largest1(x,y);
    cout<<"the large number of x and y is : "<< r <<endl;
    break;
case 2:
    cout << "Enter the number 2"<<endl;
   cin>> x>>y>>z;
    q=largest2(x,y,z);
    cout<<"the large number of x y and z is : " <<q<<endl;
    break;
case 3:
    cout << "Enter the number 3"<<endl;
   cin>> x>>y>>z>>k;
    p=largest3(x,y,z,k);
    cout <<"the large number x y z and k is : "<<p<<endl;
    break;
default :
    cout <<"please try again . No entry"<<endl;

    }
}
    return 0;
}
