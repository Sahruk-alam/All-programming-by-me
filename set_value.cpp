#include<iostream>

using namespace std;
class student
{
public:
    int id;
    string name;
    double gpa;
    void getvalue();//declaration

    void setvalue (int x, string y, double z);


};
// definition
void student::setvalue (int x, string y, double z)
{
    id=x;
    name= y;
    gpa=z;
}
void student::getvalue()
{
    cout <<"ID :"<< id<<endl;
    cout <<"Name :"<< name<< endl;
    cout << "GPA :"<<gpa<< endl<<endl;

}
int main ()
{
    student s1,s2,s3;

    s1.setvalue(231311,"sahruk",3.21);// calling
    s1.getvalue();

    s2.setvalue(11025,"alam",3.65);
    s2.getvalue();


//s3.display();
    return 0;
}
