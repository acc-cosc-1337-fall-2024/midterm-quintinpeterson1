
#include <iostream>
#include <vector> // Great library 
#include "question1.h"
using namespace std;

int main() {
    int num;
    char choice;
    
    do {
        do {
            cout << "Enter a number between 1 and 60: ";
            cin >> num;
            if (num < 1 || num > 60) {
                cout << "Invalid input. Please enter a number between 1 and 60." << "\n";
            }
        } while (num < 1 || num > 60);
        
        vector<int> primes = get_primes(num);
        
        cout << "Prime numbers up to " << num << " are:" << "\n";
        for (int prime : primes) {
            cout << prime << " ";
        }
        cout << "\n";
        
        cout << "Do you want to continue (y/n)? ";
        cin >> choice;
        
    } while (choice == 'y' || choice == 'Y');
    
    cout << "Goodbye!" << "\n";
    
    return 0;
}
