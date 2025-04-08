#include<iostream >
using namespace std;
int main ()
{
    int size,i;
    cout<<"Array size declear : ";
    cin>>size;
    int arr[size];
    cout<<"Input array sorted value : ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Original sorting array : ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    int left=0,n=size,mid;
    int right=n-1;
    int value;
    cout<<"\nSearch value number : ";
    cin>>value;
    while (left<=right)
    {
        mid=(left+right)/2;

        if(value==arr[mid])
        {
            cout<<"Binary search number index : "<<"["<<mid<<"]";
            break;
        }
        if (value>arr[mid])
        {
            left=mid+1;
        }
        if(value<arr[mid])
        {
            right=mid-1;
        }
    }
    if(left>right)
    {
        cout<<"No searching value";
    }

    return 0;
}
