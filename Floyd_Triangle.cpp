#include<iostream>
using namespace  std;
int main (){

    int i,j,n;
    cout<<"Enter number of n : ";
    cin>>n;
   int m=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
           cout<<m;
           m=1-m;
        } cout<<endl;
    }
    return 0;
}


