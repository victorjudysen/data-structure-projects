#include <iostream>
using namespace std;

struct mybio
{
    char myname[50];
    int myage;
    float myheight;
    float myweight;
};

int main()
{
    mybio info;
    mybio* infoPtr = &info; //create a pointer to the mybio structure

    cout << "Full name: ";
    cin.get(infoPtr->myname, 50); //use -> to access members through the pointer

    cout << "Age: ";
    cin >> infoPtr -> myage;

    cout << "Height: ";
    cin >> infoPtr -> myheight;

    cout << "Weight: ";
    cin >> infoPtr -> myweight;

    cout <<"\nMy Personal Information: \n";
    cout << "Full name: " << infoPtr->myname << endl;
    cout << "Age: " << infoPtr->myage << endl;
    cout << "Height: " << infoPtr->myheight << endl;
    cout << "Weight: " << infoPtr->myweight << endl;
}
