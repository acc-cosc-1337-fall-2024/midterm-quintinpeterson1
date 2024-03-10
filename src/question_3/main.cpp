#include <iostream>
#include "question3.h"
#include <limits>

using namespace std;



int main() {
    char option;
    int number;

    do {
        cout << "Enter a number (1 to 15): ";
        while (!(cin >> number) || number < 1 || number > 15) {
            cout << "Please enter a number between 1 and 15: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        string fibonacciSequence = get_fib_sequence(number);

        cout << "Fibonacci sequence: " << fibonacciSequence << endl;

        cout << "Do you want to enter another number? (Y/N): ";
        cin >> option;
    // Convert lowercase to uppercase
    } while (toupper(option) == 'Y');

    cout << "Bye bye.\n";

    return 0;
}
