#include <iostream>
using namespace std;
int main() {
    const int Size = 10;
    int arr[Size] = {5, 2, 8, 3, 7};
    int size = 5;
    cout << "Original Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    int Remove = 3;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == Remove) {
            for (int j = i; j < size - 1; ++j) {
                arr[j] = arr[j + 1];
            }
            --size;
            --i;
        }
    }
    cout << "\nPositin remove " << Remove ;
    cout <<"\n Removing array : ";
    for (int i = 0; i < size; ++i) {
    cout<< arr[i] << " ";
    }
    return 0;
}
