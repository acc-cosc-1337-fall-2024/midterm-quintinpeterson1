#include "question4.h"
#include <iostream>

using namespace std;


int main()
{
    int seconds_since_1970;

    // input seconds since 1970
    cout << "Enter seconds since 1970: ";
    cin >> seconds_since_1970;

    // output time
    cout << "Time: ";
    cout << get_hours(seconds_since_1970) << " hours ";
    cout << get_minutes(seconds_since_1970) << " minutes ";
    cout << get_seconds(seconds_since_1970) << " seconds" << "\n";


    return 0;
}