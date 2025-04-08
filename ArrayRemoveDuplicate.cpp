#include <iostream>
using namespace std;
int main() {

    int arr[10] = {45,54,16,33,45,12,80,69,54,45};
    int i,j;
    cout<<"Array having duplicate values"<<endl;
    for( i = 0 ; i < 10 ; i++ ) {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"Array After Skipping Duplicates"<<endl;
    for( i = 0 ; i < 10 ; i++ ) {
        for( j = 0 ; j < i ; j++ ) {
            if( arr[i] == arr[j] ) {
                break;
            }
        }
        if( i == j ) {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
