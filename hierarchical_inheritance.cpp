#include<iostream>
using namespace std;
class belkik
{
public:
    int x,y,z;
    void get_data()
    {
        cout<<"Enter three numbers : "<<endl;
        cin >>x>>y>>z;
    }
};
class addi : public belkik
{
public:
    void sum()
    {
        cout <<"Total number  : "<<(x+y+z)<<endl;
    }

};
class multify:public belkik
{
public:
    void multiple()
    {
        cout <<"Three number multiple : "<<(x*y*z)<<endl;
    }
};
class high:public belkik
{
public:
    void maxi()
    {
        if (x>y && y>z)
        {
            cout <<"maximum number : "<< x<<endl;
        }
        if(y>x&&y>z)
        {
            cout <<"Maximum value : "<<y<<endl;
        }
        else if (z>x&&z>y)
        {
            cout <<"Maximum value "<<z<<endl;
        }
    }
};
int main ()
{
    addi s1;
    s1.get_data();
    s1.sum();
    multify m1;
    m1.get_data();
    m1.multiple();
    high ob;
    ob.get_data();
    ob.maxi();
    return 0;
}
