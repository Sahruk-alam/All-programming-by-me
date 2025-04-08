#include <iostream>
using namespace std;
class overloading {
public:
    void overloaded(int x)
    {
        cout<<"The value : "<<x<<endl;
    }
    void overloaded(int a,int b)
    {
        cout<<"Two value addition : "<< a+b <<endl;
    }
    void overloaded(double p,double q)
    {
        cout<<"Two value substruction : "<<p-q<<endl;
    }
};
int main() {
       overloading ob;
       ob.overloaded(20);
       ob.overloaded(23,17);
       ob.overloaded(45.543,32.53);

    return 0;
}
