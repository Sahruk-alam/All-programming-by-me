#include <iostream>

struct Node {
    int key;
    Node *left, *right;

    Node(int k) : key(k), left(nullptr), right(nullptr) {}
};

class BST {
public:
    BST(int threshold) : root(nullptr), threshold(threshold), currentSum(0) {}

    // Function to insert a key into the BST
    bool insert(int key) {
        if (currentSum + key > threshold) {
            std::cout << "Insertion of " << key << " would exceed threshold. Skipping insertion.\n";
            return false;
        }

        root = insertRec(root, key);
        currentSum += key;
        return true;
    }

    // Function to perform in-order traversal and print the BST
    void inorder() {
        inorderRec(root);
        std::cout << std::endl;
    }

private:
    Node* root;
    int threshold;
    int currentSum;

    Node* insertRec(Node* node, int key) {
        if (node == nullptr)
            return new Node(key);

        if (key < node->key)
            node->left = insertRec(node->left, key);
        else if (key > node->key)
            node->right = insertRec(node->right, key);

        return node;
    }

    void inorderRec(Node* node) {
        if (node != nullptr) {
            inorderRec(node->left);
            std::cout << node->key << " ";
            inorderRec(node->right);
        }
    }
};

int main() {
    int threshold = 50;
    BST tree(threshold);

    int keys[] = {50, 30, 20, 40, 70, 60, 80};

    for (int key : keys) {
        tree.insert(key);
    }

    std::cout << "In-order traversal of the BST: ";
    tree.inorder();

    return 0;
}
