#include<iostream>
using namespace std;

int main()
{
    int num1,num2,num3;
    cout <<  "Enter the number=";
    cin>> num1;

    if (num1<40){
        cout <<"F";
    }    else if (num1<50){
        cout <<"E";
    }   else if (num1<60){
        cout <<"D";
    }   else if (num1<70){
        cout <<"c";
    }   else if (num1<80){
        cout <<"B";
    }  else if (num1<=100){
        cout <<"A+";
    }
    else{
      cout <<"Defalt value";
    }


    return 0;
}
