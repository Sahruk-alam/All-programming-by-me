#include<iostream>
using namespace std;
class person
{
protected:
     int x,y;
public:

    void input()
    {
       cout <<"Enter two number : ";
       cin>>x>>y;
    }

    void add()
    {
        cout<<"adiitional : ";
        cout <<x+y<<endl;
    }
};
class sub :public person
{
public:
    void subs()
    {
        cout<<"Mynus : ";
        cout << x-y<<endl;
    }

};
class control : public sub
{
public:
    void con()
    {
        input();
        add();
        subs();
        cout <<"Control number : ";
        cout<<x*y<<endl;
    }
};
int main()
{
control ob;
ob.con();

    return 0;
}
