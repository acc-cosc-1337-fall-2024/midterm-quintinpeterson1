
#include <iostream>
#include <vector>
#include "question1.h"
using namespace std;

int main() {
    int num;
    char choice;
    
    do {
        // Prompt user for a number and validate
        do {
            cout << "Enter a number between 1 and 60: ";
            cin >> num;
            if (num < 1 || num > 60) {
                cout << "Invalid input. Please enter a number between 1 and 60." << "\n";
            }
        } while (num < 1 || num > 60);
        
        // Get prime numbers
        vector<int> primes = get_primes(num);
        
        // Display prime numbers
        cout << "Prime numbers up to " << num << " are:" << "\n";
        for (int prime : primes) {
            cout << prime << " ";
        }
        cout << "\n";
        
        // Ask user if they want to continue
        cout << "Do you want to continue (y/n)? ";
        cin >> choice;
        
    } while (choice == 'y' || choice == 'Y');
    
    cout << "Exiting program. Goodbye!" << "\n";
    
    return 0;
}
