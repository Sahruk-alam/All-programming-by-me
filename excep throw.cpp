#include<iostream>
//#include <stdexcept>
using namespace std;
void test(double a,double b,string c)
{
try {
    if( a==0 || b==0 )
       throw 1.2;
    cout<<"Addition: "<<a/b<<" "<<c<<endl ;
}
catch(int e)
{
    cout<<"Rethrowing int exceptional : "<<endl;
    throw;
}catch(double e)
{
    cout<<"Rethrowing double exceptional : "<<endl;
    throw;
}
}
int main () {
try
{
    int p,q;
    string t;
    cin>> p>>q>>t;
    test(p,q,t);
}
 catch (int x )
 {
     cout<<"Integer method is wrong. Try another number "<<endl;
 }
 catch (double x )
 {
     cout<<"Double Method is wrong. Try another number "<<endl;
 }
 catch (string x )
 {
     cout<<" Character method is wrong. Try another number "<<endl;
 }

return 0;
}
