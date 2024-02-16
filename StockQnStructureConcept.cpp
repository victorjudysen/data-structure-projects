//the original code required the implementation of 20 items, but due to presentation purpose, i have opted to 3 items

#include <iostream>
using namespace std;

struct Item
{
    char itemID;
    string itemName;
    int itemQuantity;
};

int main()
{
    Item items[20];
    
    for(int i=0; i<20; i++)
    {
        cout << "Item ID: ";
        cin >> items[i].itemID;

        cout << "Item Name: ";
        cin >> items[i].itemName;

        cout << "Item Quantity: ";
        cin >> items[i].itemQuantity;
    }

    cout << "Recorded items: " << endl;
    for(int i=0; i<20; i++)
    {
        cout << "Item " << i+1;   
    }

    return 0;
}
