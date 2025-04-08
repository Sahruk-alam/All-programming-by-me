#include<iostream>

using namespace std;
int main()
{
int n,col,row;
cin>>n;
for(row=1;row<=n;row++)
{
    for(col=1;col<=row;col++)
    {
        cout<<" "<<col;
    }
    cout<<endl;
}
return 0;
}
