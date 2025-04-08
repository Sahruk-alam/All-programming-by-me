#include<iostream>
using namespace std;
class people
{
    int id;
    string name;
    char ch;
public:
    void setvalue(int x,string y,char z)
    {
        id=x;
        name=y;
        ch=z;
    }
    void getvalue ()
    {
        cout<<"ID   :"<<id<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Grade:"<<ch<<endl;

    }
    void display()
    {
        int num;
        cout <<"Enter the number = ";
        cin >>num;

        if (num>=0&&num<=39)
        {
            ch = 'F';
            cout<<'F'<<endl;
        }
        else if (num>=40&&num<=49)
        {
            ch='E';
            cout <<'E'<<endl;
        }
        else if (num>=50&&num<=59)
        {
            ch='D';
            cout <<'D'<<endl;
        }
        else if (num>=60&&num<=69)
        {
            ch='C';
            cout <<'C'<<endl;
        }
        else if (num>=70&&num<=79)
        {
            ch='B';
            cout <<'B'<<endl;
        }
        else if (num>=80&&num<=89)
        {
            ch='A';
            cout <<'A'<<endl;
        }  else if (num>=90&&num<=100)
        {
            ch='P';
            cout <<'P'<<endl;
        }
        else if (num>100 || num<0)

        {
            ch= 'x';
            cout <<"Default number"<<endl;
        }

    }
};
int main ()
{
    people obj1,obj2;
    obj1.setvalue(231311,"Alam", 'ch' );
    obj1.display();
    obj1.getvalue();

    return 0;
}
