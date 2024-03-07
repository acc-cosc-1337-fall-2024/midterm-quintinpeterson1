#include <iostream>
#include "question2.h"
#include <limits> // Another great library

using namespace std;

int main() {
    char choice;
    int widgetSold;

    do {
        // Prompt
        cout << "Enter the number of widgets sold: ";
        while (!(cin >> widgetSold) || widgetSold < 1) {
            cout << "Please enter a positive integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        int pointsEarned = get_earned_points(widgetSold);

        cout << "Points Earned: " << pointsEarned << "\n";

        cout << "Do you want to enter another value? (y/n): ";
        cin >> choice;

    } while (toupper(choice) == 'Y');

    cout << "Program exited.\n";

    return 0;
}