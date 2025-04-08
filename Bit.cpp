#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int X=0;

for(int i=1;i<=n;i++){
    string target;
    cin>>target;
    if(target == "X++" || target == "++X"){
        X++;
    }
    else if (target =="X--" || target =="--X"){
        X--;
    }
}
cout<<X<<endl;
    return 0;
}

