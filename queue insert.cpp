#include <iostream>
using namespace std;
#define MAX_SIZE 8
class CircularQueue {
public:
    void enqueue(int value) {
        if ((rear + 1) % MAX_SIZE == front) {
            cout << "Queue is full." << endl;
            return;
        }
        if (front == -1)
            front = 0;
        rear = (rear + 1) % MAX_SIZE;
        items[rear] = value;
        cout << "Inserted " << value << endl;
    }
    int dequeue() {
        if (front == -1) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        int removedItem = items[front];
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % MAX_SIZE;
        cout << "Removed " << removedItem << endl;
        return removedItem;
    }
private:
    int items[MAX_SIZE];
    int front = -1;
    int rear = -1;
};
int main() {
    CircularQueue q;
  cout<<"Data element adding : \n";
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);

cout<<"Element removing : "<<endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    return 0;
}
