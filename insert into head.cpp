#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int x) {
        data = x;
        next = NULL;
    }
};

void insertHead(node*& head, int data) {
    node* newNode = new node(data);
    newNode->next = head;
    head = newNode;
}

void print(node* head) {
    while (head != NULL) {
        cout << head->data << "->";
        head = head->next ;
    }
    cout << "NULL" << endl;
}

int main() {
    node* head = NULL;
cout<<"Insert into Head position : ";
    insertHead(head, 1);
    insertHead(head, 2);
    insertHead(head, 3);
    insertHead(head, 4);
    insertHead(head, 5);
    insertHead(head, 6);
    insertHead(head, 7);
    insertHead(head, 8);
    print(head);
    return 0;
}
