#include <iostream>
using namespace std;
int main()
{
    int arr[10],even[10],odd[10],eve=0,od=0,i;
    cout<<"Input array : ";
    for(i=0; i<10; i++)
        cin>>arr[i];
        cout<<"Stored array values "<<endl;
    for(i=0; i<10; i++)
    {
        if(arr[i]%2==0)
            even[eve++]=arr[i];
        else
            odd[od++]=arr[i];
    }
    cout<<"Even value = ";
    for(i=0; i<eve; i++)
    {
        cout<<even[i]<<" ";
    }
    cout<<"\nOdd value = ";
    for(i=0; i<od; i++)
    {
        cout<<odd[i]<<" ";
    }
    return 0;
}
