#include<iostream>
using namespace std;

int main ()
{
    try{
    int n1,n2;
    cout <<"Enter two number: ";
    cin>> n1>>n2;
    if (n2==0)
    {
        throw -1;
    }
    double result= (double) n1/n2 ;
    cout<< result ;

    }
    catch(int x)
    {
        cout <<"Zero not allow. please try again";
    }

return 0;
}
