#include <iostream>
using namespace std;

struct Item 
{
    char itemID;
    string ItemName;
    int itemQuantity;
    Item* next;
};

typedef Item* itemptr;

int main()
{
    Item* head = nullptr;
    for(int i=0; i<4; i++)
    {
        itemptr newItem = new Item;
        cout << "Item ID: ";
        cin >> newItem->itemID;

        cout << "Item Name: ";
        cin >> newItem->ItemName;

        cout << "Item Quantity: ";
        cin >> newItem->itemQuantity;

        newItem->next = head;
        head = newItem;
    }

    cout << "Recorded Items: \n";
    itemptr current = head;
    while (current != nullptr)
    {
        cout << "Item: ID - " << current->itemID << ", Name - " << current->ItemName << ", Quantity - " << current->itemQuantity << "\n";

        current = current->next;
    }

    // Traverse to the 2nd item
    current = head;
    for (int i = 0; i < 2 && current != nullptr; i++) {
        current = current->next;
    }

    // If current is not nullptr and it has a next node
    if (current != nullptr && current->next != nullptr) {
        itemptr temp = current->next;
        current->next = temp->next; // Adjust the next pointer to skip the 3rd item
        delete temp; // Free memory of the 3rd item
    }

    cout << "Recorded Items after deleting the 3rd item: \n";
    current = head;
    while (current != nullptr)
    {
        cout << "Item: ID - " << current->itemID << ", Name - " << current->ItemName << ", Quantity - " << current->itemQuantity << "\n";

        current = current->next;
    }

    current = head;
    while (current != nullptr)
    {
        itemptr temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
