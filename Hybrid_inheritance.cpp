#include<iostream>
using namespace std;
class sahruk
{
public:
    void alam()
    {
        cout <<"First class declear of sahruk "<<endl;
    }
};
class sarder : public sahruk
{
public:
    void tanu()
    {
        cout <<"Second class of sarder"<<endl;
    }
};
class wahab :public sahruk
{
public:
    void shanto()
    {
        cout <<"Third claas of wahab "<<endl;
    }
};
class ahad : public sarder,public wahab
{
public :
    void mehedy()
    {
        cout<<"All class declear"<<endl;
    }
};
int main ()
{
    ahad obj;
    obj.mehedy();

    sarder obj1;
    obj1.alam();

    obj.shanto();
    obj.tanu();
    return 0;
}

