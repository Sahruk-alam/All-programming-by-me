#include<iostream>
using namespace std;
int main ()
{
    int mark;
    cin>> mark;

    switch(mark)
    {
    case 33 :
        cout <<"E";
        break;
    case 40 :
        cout <<"D";
        break;
    case 50 :
        cout <<"C";
        break;
    case 70 :
        cout <<"B";
        break;
    case 75 :
        cout <<"A";
        break;
    default:
        cout <<"F";
        break;

    }
    return 0;
}
