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
void elements(node*& head, int data) {
    node* newNode = new node(data);
    newNode->next = head;
    head = newNode;
}
void print(node* head) {
    while (head != NULL) {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "8" << endl;
}
int main() {
    node* head = NULL;
   cout<<"Display elements : ";
    for (int i = 7; i>=1; i--) {
        elements(head, i);
    }
    print(head);
    return 0;
}
