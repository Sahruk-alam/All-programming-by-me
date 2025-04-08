#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{

    float  s1,s2,sub,sum,mul ;

    cout <<setprecision(10);

    cout<<"Enter two number= ";
    cin>> s1 >> s2;

    cout << showpoint;

    cout <<setw(20)<< "summation = ";
    sum= s1+s2;
    cout << sum <<endl;

 cout << noshowpoint;

    cout<<setw(20)<< "subtruction= ";
    sub = s1-s2;
    cout << sub<<endl ;
cout <<fixed;
    cout<< setw(20)<<"Multiplication= ";
    mul = s1*s2;
    cout << mul<<endl ;



    cout<< setw(20)<<"Divided= ";
    float div = s1/s2;
    cout << div<<endl ;

//    int rem;
//    cout << "remander= ";
//    rem = s1%s2;
//    cout << rem ;


    return 0;
}
