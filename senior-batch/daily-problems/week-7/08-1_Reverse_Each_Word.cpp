/**
    Problem Name    :   Reverse Each Word
    Problem Link    :   https://www.codingninjas.com/studio/problems/reverse-each-word_1262492
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

// #include <bits/stdc++.h> // could be included, but not necessary after iostream and cstring
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


string reverseEachWord(string input) 
{
    // Append a space to the end of the input string so that the last word is also reversed.
    input += " ";

    // Declare variables to store the reversed string and the temporary string.
    string str = "", temp = "";

    // Iterate over the characters in the input string.
    for (int i = 0; i < input.length(); i++) 
    {
        // If the current character is not a space, add it to the temporary string.
        if (input[i] != ' ') 
        {
            temp = input[i] + temp;
        }
        // If the current character is a space, reverse the temporary string and add it to the reversed string.
        else 
        {
            str += temp + " ";
            temp = "";
        }
    }

    // Return the reversed string.
    return str;
}

int main() 
{
    // Declare a string `str` to store the input string.
    string str;

    // Read the input string from the console.
    getline(cin, str);

    // Reverse each character in every word in the input string.
    string ans = reverseEachWord(str);

    // Print the modified string to the console.
    cout << ans << endl;

    return 0;
}
