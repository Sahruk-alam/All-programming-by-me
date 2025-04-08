#include<iostream>
using namespace std;
int main()
{
    int  i, pos, Size=10;
    float arr[Size],elem;
    cout<<"Enter 10 Array Elements: ";
    for(i=0; i<Size; i++)
        cin>>arr[i];
    cout<<"Main array : ";
    for(i=0; i<Size; i++)
        cout<<arr[i]<<"  ";
    cout<<"\n Enter new value : ";
    cin>>elem;
    cout<<"Sellect Position : ";
    cin>>pos;
    for(i=Size; i>=pos; i--)
        arr[i] = arr[i-1];
    arr[i] = elem;
    Size++;
    cout<<"\n Adding New Array is : ";
    for(i=0; i<Size; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}
