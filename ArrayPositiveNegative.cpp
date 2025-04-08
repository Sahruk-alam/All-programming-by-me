#include<iostream>
using namespace std;

int main()
{
    int i,num,arr[100];

    cout<<"Enter the array sequance number : "<<endl;
    cin>> num;
    cout<<"Enter array input"<<endl;

    for(int i=0; i<num; i++)
    {

        cin>>arr[i];
    }

    for(int i =0; i<num; i++)
    {
        if(arr[i]<0)
        {
            cout<<"Negative value: ";
            cout<<arr[i]<<" " ;
            //arr[i]++;
        }
        else if (arr[i]==0)
        {
            cout<<"This value Zero: ";
            cout<<arr[i]<<endl;

        }
        else
        {
            cout <<"Positive number : ";
            cout<<arr[i]<<endl;
            arr[i]++;
        }
    }
    return 0;
}
