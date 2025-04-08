#include <iostream>
using namespace std;
struct Node {
    char data;
    Node* left;
    Node* right;

    Node(char val) {
        data = val;
        left = right = nullptr;
    }
};
Node* createTree() {
    Node* root = new Node('A');
    root->left = new Node('B');
    root->right = new Node('C');
    root->left->left = new Node('D');
    root->left->right = new Node('E');
    root->left->left->left = new Node('G');
    root->left->left->right = new Node('H');
    root->left->left->left->left = new Node('K');
    root->left->left->right->left = new Node('L');
    root->left->left->right->right = new Node('M');
    return root;
}
void preorder(Node* node) {
    if (node == nullptr)
        return;
    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}
void inorder(Node* node) {
    if (node == nullptr)
        return;
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}
void postorder(Node* node) {
    if (node == nullptr)
        return;
    postorder(node->left);
    postorder(node->right);
    cout << node->data << " ";
}
int main() {
    Node* root = createTree();
    cout << "Preorder : ";
    preorder(root);
    cout << endl;
    cout << "Inorder : ";
    inorder(root);
    cout << endl;
    cout << "Postorder : ";
    postorder(root);
    cout << endl;
    return 0;
}
