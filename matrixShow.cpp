#include<iostream>
using namespace std;
int matrix[100][100];

void input(int n,int m){
    cout<<"Input matrix number : ";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>matrix[i][j];
        }
    }
}
void display(int n,int m){ 
cout<<"The matrix is : "<<endl;
for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n,m;
    cout<<"Enter row number : ";
    cin>>n;
    cout<<"Enret coloum number : ";
    cin>>m;
    input(n,m);
    display(n,m);
return 0;
}

