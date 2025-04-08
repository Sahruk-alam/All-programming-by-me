#include<iostream>
using namespace std;
int matrix[100][100];
void input(int n, int m) {
    cout << "Input matrix elements: " << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
}
void display(int n, int m) {
    cout << "The matrix is: " << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int n, m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;
    input(n, m);
    display(n, m);

    return 0;
}
