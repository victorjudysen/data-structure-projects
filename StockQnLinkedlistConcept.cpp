//the original code required the implementation of 20 items, but due to presentation purpose, I have opted to 4 items
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

    current = head;
    while (current != nullptr)
    {
        itemptr temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
