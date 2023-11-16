/**
    Problem Name    :   Fahrenheit To Celsius
    Problem Link    :   https://www.codingninjas.com/studio/problems/fahrenheit-to-celsius_1115673
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

// Include necessary libraries
#include <bits/stdc++.h> 
#include <iostream>

// Use the standard namespace
using namespace std;

int main() {
    // Declare three integer variables for the starting, ending, and gap of the given temperature range
    int start, end, gap;

    // Take three inputs from the user: the start, end, and gap
    cin >> start >> end >> gap;

    // Loop from the start temperature to the end temperature, incrementing by the gap each time
    for(int F = start; F <= end; F = F+gap)
    {
        // Print the current Fahrenheit temperature and its corresponding Celsius temperature
        // The Celsius temperature is calculated using the formula (F - 32) * (5.0 / 9.0)
        // The result is cast to an integer using int()
        cout << F << " " << int( ( F-32 )*( 5.0/9.0 ) ) << endl;
    }

    // Return 0 to indicate successful execution
    return 0;
}