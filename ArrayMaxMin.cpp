#include<iostream>
using namespace std;

int main ()
{
    int i,num,max ,min,arr[50] ;

    cout<<"Enter serial number : ";
    cin>>num;
    cout<<"Enter input value : ";

    for(i=0;i<num;i++)

    cin>>arr[i];

    max = arr[0];
    min = arr[0];

   for(i=0;i<num;i++)

   {
       if (arr[i]>max)
        max = arr[i];

        if(arr[i]<min)
        min=arr[i];
   }
cout<<"Maximum number : "<<max<<endl;
cout<<"Minimum number : "<<min<<endl;

    return 0;
}
