#include <iostream>
using namespace std;

int main()
{
    char names[50][50]; //array of 50 strings, each for 50 characters
    int ages[50];
    float heights[50], weights[50];

    int numPeople; //number of people to store information for

    cout << "Enter the number of people: ";
    cin >> numPeople;

    for (int i=0; i < numPeople; i++)
    {
        cout << "\nPerson " << i + 1 << ":" << endl;

        cout << "Full Name: ";
        cin.get(names[i], 50);

        cout << "Age: ";
        cin >> ages[i];

        cout << "Height: ";
        cin >> heights[i];

        cout << "Weight: ";
        cin >> weights[i];
    }

    //accessing and displaying information
    for (int i=0; i < numPeople; i++)
    {
        cout << "\nPerson " << i + 1 << ":" << endl;
        cout << "Full name: " << names[i] << endl;
        cout << "Age: " << ages[i] << endl;
        cout << "Height: " << heights[i] << endl;
        cout << "Weight: " << weights[i] << endl;
    }
}