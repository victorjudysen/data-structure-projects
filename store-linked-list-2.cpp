// Referencing from the original file: store-linked-list.cpp
// Required to add one item after the 10th item and delete the 7th item

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

//function prototypes
void addAfterTenth(Node* head, store newItem); //declares a function named addAfterTenth that adds a new node(item) after the tenth one.
void deleteSeventh(Node* head); //a function that deletes the seventh node(item) from the list.

//function definitions
void addAfterTenth(Node* head, store newItem){
    nodePtr current = head; //start at the head of the list
    int count = 0; // this is a counter to track the 10th node

    //Traverse to the 10th node
    while(current != NULL && count < 9) { // count up to 9 to reach the 10th node
        current = current->next; // moves to the next node
        count++; // increments the counter
    }

    // In case the 10th node exists
    if(current != NULL) {
        nodePtr anotherNode = new Node; // creates a new node to insert
        anotherNode->item = newItem; // assigns the new item's data to the new node
        anotherNode->next = current->next; // links the new node's next pointer to the 11th node
        current->next = anotherNode; // links the 10th node's next pointer to the new node
    } else {
        // handle the case where the list has less than 10 items.
        cout << "List has less than 10 items." << endl;
    }
}

void deleteSeventh(Node* head) {
    // Initialize pointers:
    // - current: pointer to the current node being traversed
    // - prev: pointer to the node before the current node
    // - count: counter to track the position of the current node

    nodePtr current = head; // start at the head of the list
    nodePtr prev = NULL; // keep track of the previous node
    int count = 0; // counter to track the 7th node

    // Traverse to the 7th node (or stop if the list is shorter)
    while(current != NULL && count < 7) {
        prev = current; // update the previous node pointer to point to the current node.
        current = current->next; // move the current node pointer to the next node in the list.
        count++; // increment the counter to track the position
    }

    // Incase the 7th node exists
    if(current != NULL) {
        // special case: deleting the head node
        if (prev == NULL) {
            // update the head pointer to point to the second node:
            head = current->next;
        } else {
            // bypass the 7th node by linking the previous node to the node after it.
            prev->next = current->next;
        }
        // deallocate the memory of the deleted node:
        delete current;
    }   else {
        // handle the case where the list has less than 7 items:
        cout << "List has less than 7 items." << endl;
    }
}

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

    // call the functions to add and delete items
    store newItem = {"Ubwabwa", 123};
    addAfterTenth(head, newItem);
    deleteSeventh(head);

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
