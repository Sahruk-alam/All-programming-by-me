#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char ch,name[20]="sahruk alam sarder";
    double avg,into,div;
    float per;
    double num1,num2,sum,sub ;
    cout <<"My name is= " << name<<endl;
    cout<<"summation= ";
    cin >> num1>>num2;
    sum=num1+num2;
    avg= sum/2;
    cout<<"The summation number="<<sum << endl;
    cout<<"The average number="<<avg << endl;
    sub= num1-num2;
    into= num1*num2;

    cout<<"The subtraction number="<<sub << endl;
    cout<<"The intro number="<<into << endl;
     div= num1/num2;

    cout<<"The divided number="<<div << endl;




    getch();
}

