#include<iostream>
using namespace std;
int main ()
{
    int num[10];
    int i, j, desc;

    cout<<"Enter 10 Numbers : ";

    for (i = 0; i < 10; ++i)
    cin>>num[i];

    for (i = 0; i < 10; ++i)
    {
        for (j = i + 1; j < 10; ++j)
        {
            if (num[i] < num[j])
            {
                desc = num[i];
                num[i] = num[j];
                num[j] = desc;
            }
        }
    }
    cout<<"\n Numbers in Descending Order : \n";
    for (i = 0; i < 10; ++i)
    {

        cout<<num[i];
        cout<<" ";
    }
}
