#include<iostream>
using namespace std;
int main(){
 int p;
 int x=0;
 cin>>p;
for(int i=0;i<p;i++)
 {
    int a[3],y=0;
  for(int i=0;i<3;i++){
    cin>>a[i];
  }
 for(int i=0;i<3;i++){
    if(a[i]==1){
     y++;
    }
    }
    if(y>=2){
        x++;
    }
 }
 cout<<x;
    return 0;
}