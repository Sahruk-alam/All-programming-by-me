#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int> q;
    q.push(5);
    q.push(9);
    q.push(1);
    q.push(12);
    q.push(15);
    q.push(16);
    cout << "Queue contents: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}
