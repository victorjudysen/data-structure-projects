#include <iostream>
using namespace std;

int hours;
int oldMinutes;
int seconds;

void hoursIntoMins(int hours) {
    int newHours;
    int totalMinutes;

    newHours = hours * 60;
    totalMinutes = newHours + oldMinutes;

    cout << "Total minutes are: " << totalMinutes << "." << seconds << endl;
}

int main() {

    cout << "Enter the number of hours spent outdoors: ";
    cin >> hours;
    
    cout << "Enter the number of minutes spent outdoors: ";
    cin >> oldMinutes;
    
    cout << "Enter the number of seconds spent outdoors: ";
    cin >> seconds;

    // call the function to convert the inputted hours into minutes
    hoursIntoMins(hours);

    return 0;
}