#include<iostream >
using namespace std;
int main ()
{
    int size,i;
    cout<<"Array size declear : ";
    cin>>size;
    int arr[size];
    cout<<"Input array value: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Original array : ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    int  x=4 ;
    int m=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==x)
        {
            cout<<"\nSearching array index : "<<"["<<i<<"]";
            m++;
            break;
        }
    }

    if (m==0)
    {
        cout<<"\nNot found ";
    }

    return 0;
}
