#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data=val;
        left= right=nullptr;
    }
};
Node* insertBST(Node* root, int val)
{
    if (root == nullptr)
    {
        return new Node(val);
    }
    if (val < root->data)
    {
        root->left = insertBST(root->left, val);
    }
    else
    {
        root->right = insertBST(root->right, val);
    }
    return root;
}
Node* constructBST()
{
    Node* root = nullptr;
    char choice;
    do
    {
        int val;
        cout << "Enter value to insert: ";
        cin >> val;
        root = insertBST(root, val);
        cout << "Insert another node ? (y/n): ";
        cin >> choice;
    }
    while (choice == 'y' || choice == 'Y');

    return root;
}
void inorder(Node* root)
{
    if (root == nullptr)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    cout<<"Enter input value\n";
    Node* root = constructBST();
    cout << "Inorder swaping Traversal of BST: ";
    inorder(root);
    cout<<endl;
    return 0;
}
