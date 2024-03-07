#include "question1.h"
#include "iostream"
bool test_config()
{
    return true;
}

bool is_prime(int number) {
    if (number <= 1)
        return false;
    if (number <= 3)
        return true;
    if (number % 2 == 0 || number % 3 == 0)
        return false;

    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0)
            return false;
    }
    
    return true;
}

vector<int> get_primes(int num) {
    vector<int> primes;
    
    for (int i = 2; i <= num; ++i) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }
    
    return primes;
}