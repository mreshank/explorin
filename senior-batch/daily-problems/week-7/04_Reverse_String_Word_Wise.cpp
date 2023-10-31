/**
    Problem Name    :   Reverse String Word Wise
    Problem Link    :   https://www.codingninjas.com/studio/problems/reverse-string-word-wise_1262348
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

#include <iostream>

using namespace std;

string reverseStringWordWise(string input) 
{
    // Append a space to the end of the string so that the last word is also reversed.
    input += " ";

    // Declare variables to track the current index in the string and the reversed string.
    int index = 0;
    string nstr = "", temp = "";

    // Iterate over the characters in the string.
    for (int i = 0; i < input.length(); i++) 
    {
        // If the current character is not a whitespace character, add it to the temporary string.
        if (input[i] != ' ') 
        {
            temp += input[i];
        }
    
        /* If the current character is a whitespace character, 
           reverse the temporary string and add it to the reversed string. */
        else 
        {
            nstr = temp + " " + nstr;
            temp = "";
        }
    }

    // Return the reversed string.
    return nstr;
}

// This is the pre-written main function to take input and print the reversed string.
int main()
{
    string s;

    // Taking input of string type
    getline(cin, s);

    // Reversing the string as required and saving into a variable named ans
    string ans = reverseStringWordWise(s);

    // Printing the reversed string from the variable.
    cout << ans << endl;
}