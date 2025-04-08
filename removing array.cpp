#include<iostream>
using namespace std;
int main ( )
{

    int i,target,n;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elememnt array : ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Original array : ";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nTarget postion : ";
    cin>>target;
    if(target>=0 && target<n )
    {
        for(int i=target; i<n; i++)
        {
            arr[i]=arr[i+1];

        }
        n--;
        cout<<"Removing array : ";
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    else
    {
        cout<<"Not found"<<endl;
    }
    return 0;
}


