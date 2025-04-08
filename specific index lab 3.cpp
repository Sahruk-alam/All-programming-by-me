#include <iostream>
using namespace std;
int findIndex(int arr[], int size, int target) {
    for (int i = 1; i <= size; ++i) {
        if (arr[i] == target) {
            return i + 1;}}
return -1;
}
int main() {
    int size=5 ;
    int arr[size];
    cout<<"Enter input array : ";
    for (int i = 1; i <= size; ++i)
    {
       cin>>arr[i];
    }
    int target;

    cout << "Enter the element search: ";
    cin >> target;

    int index = findIndex(arr, size, target);

    if (index != -1) {
        cout << "The search index of in the array is: " << index <<endl;
    } else {
        cout <<" Not found in the array." << endl;
    }

    return 0;
}
