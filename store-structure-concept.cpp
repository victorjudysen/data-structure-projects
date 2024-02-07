#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node *link;
};

typedef Node* nodePtr; //creates an alias of the node pointer in order to avoid reusing node* over and over again.

int main() 
{
    // 1. Create a new node using dynamic memory allocation
    nodePtr head = new Node; // Allocate memory for the head node
    nodePtr secondNode = new Node; // Allocate memory for the second node
    nodePtr thirdNode = new Node; // Allocate memory for the third node

    // 2. Assign values to the node's members:
    head -> data = 20; // Assign the value 20 to the data member
    // head -> link = NULL; // Set the link member to NULL, indicating the end of the list
    head -> link = secondNode; // Update the link member to point to the location of the second node

    // 3. Add another node after head node
    secondNode -> data = 30; // Assign the value 30 to the data member of the second node
    secondNode -> link = thirdNode; // Set the link member to point to the location of the thirf node

    // 4. Add another node after second node
    thirdNode -> data = 40; // Assign the value 40 to the data member of the third node
    thirdNode -> link = NULL; // Set the link member to NULL, indicating the end of the list

    // 5. Print the node's data to verify
    cout << "Data in head node: " << head -> data << endl;
    cout << "Link of second node: " << head -> link << endl;
    cout << endl;
    cout << "Data in second node: " << secondNode -> data << endl;
    cout << "Link of third node: " << secondNode -> link << endl;
    cout << endl;
    cout << "Data in third node: " << thirdNode -> data << endl;
    cout << "Link of next node: " << thirdNode -> link << endl;

    return 0;
} 

