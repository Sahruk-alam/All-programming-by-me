
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

void insertLast(node*& head, int data) {
    node* newNode = new node(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
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
    cout<<"Insert into Last position : ";
    insertLast(head, 1);
    insertLast(head, 2);
    insertLast(head, 3);
    insertLast(head, 4);
    insertLast(head, 5);
    insertLast(head, 6);
    insertLast(head, 7);
    insertLast(head, 8);

    print(head);
    return 0;
}
