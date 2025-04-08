#include<iostream>
using namespace std;
int main ()
{
    int i,size=5;
    int arr[size];
    cout<<" Enter input : ";
    for(i=1;i<=size;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nOriginal array : ";
  for(i=1;i<=size;i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<"\nReverse array show : ";
    for(i=size;i>=1;i--)
    {
        cout<< arr[i]<<" ";
    }
    return 0;
}
