/**
    Problem Name    :   Remove character
    Problem Link    :   https://www.codingninjas.com/studio/problems/remove-character_1263701
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

// #include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

string removeAllOccurrencesOfChar(string input, char c) 
{
    // Declare a string `str` to store the modified string.
    string str = "";

    // Iterate over the characters in the input string.
    for (int i = 0; i < input.length(); i++) 
    {
        /* If the current character in the input string is not
           equal to the character `c`, add it to the modified string. */
        if (input[i] != c) 
        {
            str.push_back(input[i]);
        }
    }

    // Return the modified string.
    return str;
}

int main() 
{
    // Declare variable to store the input string.
    string input;
    // Declare variable to store the character to be removed.
    char c;

    // Read the input string and the character to be removed from the console.
    cin >> input >> c;

    // Remove all occurrences of the character `c` from the input string.
    string output = removeAllOccurrencesOfChar(input, c);

    // Print the modified string to the console.
    cout << output << endl;

    return 0;
}