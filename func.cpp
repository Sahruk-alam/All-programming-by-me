#include<iostream>
using namespace std;
class student
{
public:
    int id;
    double mark;
    char name[100];

    void display()
    {
        cout<< id <<" = "<< mark <<endl;
    }
};
int main()
{
    student sahruk,tanu,alam;


    sahruk.id =231311025;
    sahruk.mark= 75.5;

   sahruk.display();

    tanu.id =231311026;
    tanu.mark= 70;
    tanu.display();

    alam.id =231311026;
    alam.mark= 65.36;
    alam.display();



    return 0;
}
