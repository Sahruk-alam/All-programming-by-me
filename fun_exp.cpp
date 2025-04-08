#include<iostream>
using namespace std;
class person
{
    private:
    int serial;
    double amount;
    public:
        int het (int x,double y)
        {
            x=serial;
            y=amount;
        }
    int soid ( )
    {
        cout <<"All number: "<< serial<<endl;
        cout <<"Their money: "<< amount<<"BDT"<<endl;

    }
    double display ()
    {

    }
};
 int main ()
 {
     person obj1,obj2;
     obj1.het(100235,45000.256);
     obj1.soid();

     return 0;
 }
