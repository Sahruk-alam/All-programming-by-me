#include<iostream>
using namespace std;
typedef struct student_information
{
    int id;
    double cp;
}stu;
//typedef struct student_information stu;
int main ()
{
    //struct student st;
    stu st;
    st.id=231311;
    st.cp=3.78;
    cout<<"ID   : "<<st.id<<endl;
    cout<<"CGPA : "<<st.cp;
    return 0;
}
