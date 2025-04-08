#include <iostream>
using namespace std;

// Define the structure of a tree node
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x)
    {
        val=x;
        left=nullptr;
        right=nullptr;


    }
};
// Function to swap the left and right children of every node in the binary tree
void swapNodes(TreeNode* root)
{
    if (root == nullptr) return;

    // Swap the left and right children
    TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;
    // Recursively swap for left and right subtrees
swapNodes(root->right);
    swapNodes(root->left);

}
// Function to print the tree in-order (for testing)
void printInOrder(TreeNode* root)
{
    if (root == nullptr) return;
    printInOrder(root->left);
    cout << root->val << " ";
    printInOrder(root->right);
}
int main()
{
    // Creating a simple binary tree
    TreeNode* root = new TreeNode(24);
    root->left = new TreeNode(14);
    root->right = new TreeNode(46);
    root->left->left = new TreeNode(10);
    root->left->right = new TreeNode(17);
    root->right->left = new TreeNode(44);
    root->right->right = new TreeNode(48);
    cout << "Original tree (in-order): ";
    printInOrder(root);
    cout << endl;
    // Swap nodes
    swapNodes(root);
    cout << "Swapped tree (in-order): ";
    printInOrder(root);
    cout << endl;

    return 0;
}

