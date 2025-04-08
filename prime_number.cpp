#include<iostream>
using namespace std;

int main() {
    int start, ending,i,j;
    int x=0;

    cout << "Input number for starting range: ";
    cin >> start;
    cout << "Input number for ending range: ";
    cin >> ending;

    cout << "The prime numbers between " << start << " and " << ending << " are: ";
    for (int i = start; i <= ending; i++) {
       if (i <= 1)
            continue;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (j * j > i) {
                   x++;
            cout << i << " ";
        }
    }
   cout<<"\nThe total number of prime numbers between"<<start<<" to "<< ending<<" is: "<<x;

    return 0;
}
