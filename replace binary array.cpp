#include<iostream >
using namespace std;
int main ()
{
    int size=6,i,value;
    int arr[size];
    cout<<"Input array value : ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Original array : ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    for(i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[j]>arr[i])
            {
                value= arr[i];
                arr[i]=arr[j];
                arr[j]=value;
            }
        }
    }
    cout<<"\nDescending buble Sorting Array : ";
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    int left=0,n=size,mid;
    int right=n-1;
    int ITEM;
    cout<<"\nSearch ITEM number : ";
    cin>>ITEM;
    while (left<=right)
    {
        mid=(left+right)/2;
        if(ITEM==arr[mid])
        {
            arr[mid]=-1;
         cout<<"Binary search number index : "<<"["<<mid<<"]";
            cout<<"\nReplacing array : ";
            for(i=0; i<size; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<"\nItem found";
            break;
        }
        if (ITEM<arr[mid])
        {
            left=mid+1;
        }
        if(ITEM>arr[mid])
        {
            right=mid-1;
        }
    }
    if(left>right)
    {
        cout<<"Item is not found";
    }
    return 0;
}
