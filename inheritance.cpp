#include<iostream>
using namespace std;
class person
{
public:
    string name;
    int code;
    void test()
    {
        cout <<"Enter name : ";
        cin>>name;
        cout<<"Enter code : ";
        cin>>code;
        cout<<"Name : "<<name<<endl;
        cout<<"Code : "<<code<<endl;
    }

};
class account : public person
{
public:
    double pay;
    void sample()
    {
        test();
        cout<<"Enter pay : ";
        cin>>pay;

        cout<<"Pay of ammount : "<<pay<<endl;
    }
};
class admin : public person
{
public:
    string experience;
    void simple()
    {
        cout<<"Enter Experience : ";
        cin>>experience;
        cout<<"Experience is : "<<experience<<endl;
    }
};
class master : public account, public admin
{
public:
    void show()
    {
        cout<<" All information "<<endl;
        sample();
        simple();

    }
};
int main ()
{
    master obj;
    obj.show();
    return 0;
}
