#include<iostream>
using namespace std;
class bb {

};
    void test(double a,double b,string c)
{
    if( a==0 || b==0 )
       throw 1;
    cout<<"Addition: "<<a+b<<" "<<c ;
}


int main () {
try
{
    test(10.5,0,"sahruk");
}
 catch (int x )
 {
     cout<<"This method is wrong. Try another number ";
 }
 catch (double x )
 {
     cout<<" Decimal This method is wrong. Try another number ";
 }
 catch (string x )
 {
     cout<<" Char method is wrong. Try another number ";
 }

return 0;
}
