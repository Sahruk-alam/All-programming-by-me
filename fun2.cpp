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
    student(int x,double y,float z)
    {
        id=x;
        gpa=y;
        avgmark =z;
    }
    student()
    {
        cout << "Default constractor"<<endl;
    }
};
int main ()
{
    student ob;
    student jkl(231311025,3.69,85 );
    jkl.open ();

    student bnm(231311024,3.8,90);
    bnm.open ();


    return 0;
}

