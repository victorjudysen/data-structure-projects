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
    for(int i=0; i<12; i++)
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

    // Traverse to the 10th item
    current = head;
    for (int i = 0; i < 9 && current != nullptr; i++) {
        current = current->next;
    }

    if (current != nullptr) {
        itemptr newItem = new Item;
        cout << "Enter details for the new item: \n";
        cout << "Item ID: ";
        cin >> newItem->itemID;

        cout << "Item Name: ";
        cin >> newItem->ItemName;

        cout << "Item Quantity: ";
        cin >> newItem->itemQuantity;

        newItem->next = current->next;
        current->next = newItem;
    }

    cout << "Recorded Items after adding a new item: \n";
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
