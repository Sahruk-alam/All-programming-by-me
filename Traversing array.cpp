#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    int n,i;
    cout<<"Enter array "<<endl;
    for(i=0;i<15;i++)
    {
     cin>>arr[i];
    }
    cout <<"Printed array : "<<endl;
    for(i=0;i<15;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
