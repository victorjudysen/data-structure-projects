#include <iostream>
using namespace std;

struct store {
    string name;
    char id;
    int quant;
};

struct Node {
    store item;
    Node* next;
};

typedef Node* nodePtr;

int main(){
    nodePtr head = NULL; //start with an empty list + initializes a head pointer to an empty list

    for (int i=0; i<15; i++) {
        nodePtr newNode = new Node; //create a new node for each item if the loop is looping(if the condition is true)

        cout << "Enter details for item " << i+1 << ":" << endl;

        cout << "Name: ";
        getline(cin, newNode->item.name); //used to handle names with spaces + reads the entire item name, including spaces.

        cout << "ID: ";
        cin >> newNode->item.id;

        cout << "Quantity: ";
        cin >> newNode->item.quant;
        cin.ignore(); //discard extra newline characters + consumes the newline character left in the input stream

        //crutial part of the program used for building the linked list structure
        newNode->next = head; //link the new node to the head
        head = newNode; //update the head pointer
    }

    //to display the stored records 
    cout << "\nInventory Items:\n";
    nodePtr current = head; //creates a pointer and initializes it to the head of the linked list, this will be used to traverse the list.
    while (current != NULL) {
        cout << "Item: " << current->item.name << " (" << current->item.id << "), Quantity: " << current->item.quant << endl;

        current = current->next; //move to the next node
    }

    //Remember to deallocate memory for each node -- to avoid memory leaks
    nodePtr temp; //declares a temporary pointer 'temp' to assist in node removal
    while (head != NULL) { 
        temp = head; //stores current head node in 'temp' pointer for later deletion
        head = head->next; //moves the head pointer to the next node in the list, effectively disconnecting the current head from the list
        delete temp; //releases memory occupied by the node pointed to by temp
    }
    // note: dynamically allocated memory using 'new' must be manually deallocated using 'delete' to avoid memory leaks
    return 0;
}

