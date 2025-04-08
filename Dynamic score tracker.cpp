#include <iostream>
using namespace std;

struct Node {
    int score;
    Node* next;
};

void insertScore(Node*& head, int newScore) {
    Node* newNode = new Node;
    newNode->score = newScore;
    newNode->next = head;
    head = newNode;
}

void displayScores(Node* head) {
    cout << "Scores: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->score << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    insertScore(head, 85);
    insertScore(head, 92);
    insertScore(head, 78);
    displayScores(head);
cout<<"Insert new score : \n";
    insertScore(head, 95);
    displayScores(head);

    return 0;
}
