#include<iostream>
using namespace std;
class student
{
    public:
    int id;
    float gpa;
};
int main ()
{
    student tanu,alam;
    tanu.id= 231311025 ;
    tanu.gpa= 3.32;
    cout<<tanu.id<<"="<<tanu.gpa <<endl;


    //student ;

     alam.id= 231311026 ;
    alam.gpa= 3.12;
    cout<< alam.id<<"="<<alam.gpa <<endl;

    return 0;
}
