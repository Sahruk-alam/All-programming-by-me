#include<iostream>
using namespace  std;
class student {
public:
    void display(int i)
    {
        for(int i=1;i<=10;i++)
        cout<<i<<". "<<"I am sahruk alam sarder"<<endl;
    }
    void avg()
    {
        int sum=0;
        double avg;
        for(int i=1;i<=10;i++)
        {
            sum=sum+i;

        }
       cout<<sum;
       avg=sum/9.0;
       cout<<"Average:"<<avg;
    }

};
 int main ()
 {
     student obj;
     obj.display('i');
     obj.avg();

 return 0;
 }
