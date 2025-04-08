#include<iostream>
using namespace std;

int main()
{
    int n,i,sum=0;
    cout << "the number of value: ";
    cin>> n;
    int student[n];
    for(i=0; i<n; i++)
    {
        cout<<"Marks for student "<<i+1<<"=";
        cin>> student[i];
        sum=sum+student[i];

    }
    cout << "Total marks: "<< sum<<endl;
    float  avg=(float)sum/n;
    cout <<"Average number: "<<avg<<endl;
    int max = student[0];
    int min = student[0];
    for (i=1; i<n; i++)
    {
        if (max< student[i])
        {
            max= student[i];
        }

        if (min>student[i])
        {
            min = student[i];
        }

    }
 cout<<"minimum value = "<<min<<endl;
cout<<"maximum value = "<<max<<endl;
    return 0;
}
