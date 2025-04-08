#include<iostream>
using namespace  std;

void test(int n=5){
int i,j;
   int m=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
           cout<<m;
           m=1-m;
        } cout<<endl;
    }

}
int main (){

    test();
    return 0;
}


