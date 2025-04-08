#include<iostream>
using namespace std;
int main()
{
    int Size=5,i;
    int arr[Size];
    cout<<" Input array : ";
    for(i=1;i<=Size;i++)
    {
      cin>>arr[i];
    }
    cout<<"\n Printed array : ";
    for(i=1;i<=Size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n Even number of array : ";
     for(i=1;i<=Size;i++)
     {
         if(arr[i]%2==0)
         {
         cout<<arr[i]<<" ";
         }

     }

    return 0;
}
