#include<iostream>
using namespace std;
class student
{
public:
    int id ;
    double gpa ;
    float avgmark;
    void open()
    {
        cout << id <<" = "<< gpa<<" = "<< avgmark<<endl;
    }
    void setvalue(int x,double y,float z)
    {
        id=x;
        gpa=y;
        avgmark =z;
    }
};
int main ()
{
    student jkl,bnm,tanu;
    jkl.setvalue(231311025,3.69,85 );

    jkl.open ();

    bnm.setvalue(231311024,3.8,90);

    bnm.open ();


    return 0;
}

