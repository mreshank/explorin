/**
    Problem Name    :   Reverse Each Word
    Problem Link    :   https://www.codingninjas.com/studio/problems/reverse-each-word_1262492
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

// #include <bits/stdc++.h> // could be included, but not necessary after iostream and cstring
#include <iostream>
#include <cstring>
using namespace std;

string removeConsecutiveDuplicates(string input) 
{
    // If the string is empty or has only one character, return the string.
    if (input.length() <= 1) 
    {
        return input;
    }

    // Declare a variable `index` to track the index of last next non-duplicate character .
    int index = 0;

    // Declare a string `str` to store the modified string.
    string str = "";

    // Add the first character to the modified string.
    str += input[0];

    // Iterate over the remaining characters in the string.
    for (int i = 1; i < input.length(); i++) 
    {
        /* If the current character is not the same as the previous character, 
           add it to the modified string and increment the index. */
        if (str[index] != input[i]) 
        {
            str += input[i];
            index++;
        }
    }

    // Return the modified string.
    return str;
}

int main() 
{
    // Declare a string `str` to store the input string.
    string str;

    // Read the input string from the console.
    cin >> str;

    // Remove consecutive duplicates from the input string.
    string modifiedStr = removeConsecutiveDuplicates(str);

    // Print the modified string to the console.
    cout << modifiedStr << endl;

    return 0;
}