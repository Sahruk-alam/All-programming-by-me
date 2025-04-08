#include<iostream>
using namespace std;
typedef struct student_information
{
    int id;
    float cp;
}stu;
int main ()
{
    stu *st;
    int *x;
    st = (stu*)malloc(sizeof(stu));
    x= (int*)malloc(sizeof(int));
    st->id=231311;
    st->cp=3.78;
    cout<<"ID   : "<<st->id<<endl;
    cout<<"CGPA : "<<st->cp;
    return 0;
}
