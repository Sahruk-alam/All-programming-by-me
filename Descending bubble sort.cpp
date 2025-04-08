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
    return 0;
}
