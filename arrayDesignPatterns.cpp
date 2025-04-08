#include<iostream>
using namespace std;
void design1(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
} 
void design2(){
    for(int i=0;i<5;i++){
        for(int j=4;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
void design3(){
    for(int i=4;i>=0;i--){
        for(int j=0;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main (){
   design1();
   design2();
  design3();
    return 0;
}