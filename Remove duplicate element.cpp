#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,3,3,3,5,5,6,7,8,9,9,9}; // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Original array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Remove duplicates
    int j = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] != arr[j]) {
            ++j;
            arr[j] = arr[i];
        }
    }
    std::cout << "Array after removing duplicates: ";
    for (int i = 0; i <= j; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
