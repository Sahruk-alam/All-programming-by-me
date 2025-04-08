#include<iostream>
using namespace std;

int main ()
{
    int arr[10],i;
    cout <<"Enter array : ";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"Original array : ";
    for(i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int new_arr;
    cout<<"Add array : ";
    cin>> new_arr;
    arr[10]=new_arr;
    cout<<"Adding array sequance number : ";
    for(i=0;i<=10;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
