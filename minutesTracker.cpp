#include <iostream>
using namespace std;

// global variables for the entire program
int hours;
int oldMinutes;
int seconds;

// function to convert hours into minutes and provide output 
void hoursIntoMins(int hours) {
    int recordedHours;
    int totalMinutes;

    recordedHours = hours * 60;
    totalMinutes = recordedHours + oldMinutes;

    cout << "Total minutes spent outdoors: " << totalMinutes << "." << seconds << endl;
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