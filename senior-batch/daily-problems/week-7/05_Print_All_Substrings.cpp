/**
    Problem Name    :   Reverse String Word Wise
    Problem Link    :   https://www.codingninjas.com/studio/problems/all-substrings_1262347
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

// #include <bits/stdc++.h> // could be included, but not necessary after iostream and cstring
#include <iostream>
#include <cstring>

using namespace std;

void printSubstrings(string input) 
{
    // Iterate over the characters in the string `input`.
    for (int i = 0; i < input.length(); i++) 
    {
        // For each character, iterate over the remaining characters in the string.
        for (int j = i + 1; j <= input.length(); j++) 
        {
            // Extract the substring from the start index `i` to the end index `j`.
            string substring = input.substr(i, j - i);

            // Print the substring.
            cout << substring << endl;
        }
    }
}

// This is the pre-written main function to take input and print the reversed string.
int main()
{
    string input;

    // Taking input of string type
    getline(cin, input);

    // Printing all the substrings in the entered string.
    printSubstrings(input);
    
    return 0;
}