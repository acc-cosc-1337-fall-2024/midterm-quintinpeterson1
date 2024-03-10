#include "question3.h"

using namespace std;

bool test_config()
{
    return true;
}

    string get_fib_sequence(int n) {
    string result;
    

    if (n <= 0) {
        return result;
    }

    int first = 0, second = 1;

    result += to_string(first) + " ";
    if (n == 1) {
        return result;
    }

    result += to_string(second) + " ";
    if (n == 2) {
        return result;
    }

    for (int i = 3; i <= n; ++i) {
        int next = first + second;
        result += to_string(next) + " ";
        first = second;
        second = next;
    }

    return result;
}