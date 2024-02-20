#include <iostream>
using namespace std;

// Define a structure to represent a node in the binary tree
struct TreeNode {
    int data;           // Data stored in the node
    TreeNode* left;     // Pointer to the left child node
    TreeNode* right;    // Pointer to the right child node
};

typedef TreeNode* treenode;

// Function to create a new node with the given value
treenode createNode(int val) {
    treenode newNode = new TreeNode;   // Allocate memory for the new node
    newNode->data = val;                // Assign the value to the new node
    newNode->left = nullptr;            // Initialize the left child pointer to nullptr
    newNode->right = nullptr;           // Initialize the right child pointer to nullptr
    return newNode;                     // Return the pointer to the new node
}

// Function to recursively insert a value into the binary tree
treenode insertRecursive(TreeNode* root, int val) {
    // Base case: if the current root is nullptr, create a new node with the value
    if (root == nullptr) {
        return createNode(val);
    }

    // If the value is less than the current node's data, insert it into the left subtree
    if (val < root->data) {
        root->left = insertRecursive(root->left, val);
    }
    // If the value is greater than or equal to the current node's data, insert it into the right subtree
    else {
        root->right = insertRecursive(root->right, val);
    }

    return root;    // Return the modified root node
}

// Function to perform an inorder traversal of the binary tree
void inorderTraversal(treenode root) {
    // Base case: if the root is nullptr, return
    if (root != nullptr) {
        // Traverse the left subtree
        inorderTraversal(root->left);
        // Print the data of the current node
        cout << root->data << " ";
        // Traverse the right subtree
        inorderTraversal(root->right);
    }
}

// Main function
int main() {
    treenode root = nullptr;   // Initialize the root pointer to nullptr

    // Insert elements into the binary tree
    root = insertRecursive(root, 5);
    root = insertRecursive(root, 3);
    root = insertRecursive(root, 7);
    root = insertRecursive(root, 1);
    root = insertRecursive(root, 4);

    // Perform an inorder traversal of the binary tree and print the elements
    cout << "Inorder traversal of the binary tree: ";
    inorderTraversal(root);
    cout << endl;

    return 0;   // Return 0 to indicate successful execution
}
