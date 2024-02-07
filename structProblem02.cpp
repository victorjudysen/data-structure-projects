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

    cout << "Full name: ";
    cin.get(info.myname, 50);

    cout << "Age: ";
    cin >> info.myage;

    cout << "Height: ";
    cin >> info.myheight;

    cout << "Weight: ";
    cin >> info.myweight;

    cout << "\nMy Personal Information: \n";
    cout << "Full name: " << info.myname << endl;
    cout << "Age: " << info.myage << endl;
    cout << "Height: " << info.myheight << endl;
    cout << "Weight: " << info.myweight << endl;
}