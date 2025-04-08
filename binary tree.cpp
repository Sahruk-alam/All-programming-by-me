#include <iostream>

using namespace std;

// Define the structure of a node in the BST
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to insert a node into the BST
TreeNode* insert(TreeNode* root, int val) {
    if (root == nullptr) {
        return new TreeNode(val);
    }

    if (val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }

    return root;
}

// Function to construct BST from user input
TreeNode* constructBST() {
    TreeNode* root = nullptr;
    char choice;

    do {
        int val;
        cout << "Enter value to insert: ";
        cin >> val;

        root = insert(root, val);

        cout << "Do you want to insert another node? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return root;
}

// Function to perform in-order traversal and collect node values
void inorderCollect(TreeNode* root, int*& values, int& index) {
    if (root == nullptr) {
        return;
    }
    inorderCollect(root->left, values, index);
    values[index++] = root->data;
    inorderCollect(root->right, values, index);
}

// Function to reassign values during in-order traversal
void inorderAssign(TreeNode* root, int*& values, int& index) {
    if (root == nullptr) {
        return;
    }
    inorderAssign(root->left, values, index);
    root->data = values[index++];
    inorderAssign(root->right, values, index);
}

// Function to count the number of nodes in the BST
int countNodes(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}

// Function to print the BST (in-order traversal)
void inorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    cout << "Construct Binary Search Tree\n";
    TreeNode* root = constructBST();

    int nodeCount = countNodes(root);
    int* values = new int[nodeCount];
    int index = 0;

    // Collect values in in-order traversal
    inorderCollect(root, values, index);

    // Sort the collected values in ascending order
    sort(values, values + nodeCount);

    index = 0;
    // Reassign values in in-order traversal
    inorderAssign(root, values, index);

    cout << "BST after swapping values to be in ascending order: ";
    inorderTraversal(root);
    cout << endl;

    delete[] values;

    return 0;
}
