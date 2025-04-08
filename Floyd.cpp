#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows in Floyd's Triangle
    int num = 0; // Start with 0

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << num;
            num = 1 - num; // Toggle between 0 and 1
        }
        cout << endl;
    }

    return 0;
}
