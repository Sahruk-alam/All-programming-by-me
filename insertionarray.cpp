#include<iostream>
using namespace std;
int main ()
{
    int x,n,i;
    cout<<"Enter size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Original Array sequence : ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    int value ;
    cout<<"\nEnter value pass :";
    cin>>value;
    cout<<"Enter target position : ";
    cin>>x;

    for(int i=n; i>x; i--)
    {
        arr[i]=arr[i-1];
        arr[x]=value;
    }
   n++;
    cout<<"\nInsertion array : ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
