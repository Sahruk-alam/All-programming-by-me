#include <iostream>
using namespace std;

class construct
{

public:
    float area;
    construct()
    {
        area = 5;
    }
    construct(int a, int b)
    {
        area = a + b;
    }
    construct(int a, int b,int c)
    {
        area= (a+b)-c;
    }
    void disp()
    {
        cout<< area<< endl;
    }
};

int main()
{
    construct ob;
    construct ob2( 10,20);
     construct ob3( 12,27,22);

    ob.disp();
    ob2.disp();
    ob3.disp();
    return 0;
}
