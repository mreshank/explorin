#include <bits/stdc++.h>

bool checkPalindrome(string s) 
{
    // Filter the string to remove all non-alphanumeric characters.
    string filteredS = "";

    for (char ch : s) 
    {
        // Checking if the charcters are either alphabet or digit only.
        if (isalpha(ch) || isdigit(ch)) 
        {
            // Saving the string into another variable only is its alphanumeric.
            filteredS += tolower(ch);
        }
    }

    // Declare variables to track the start and end indices of the string.
    int start = 0;
    int end = filteredS.length() - 1;

    // Iterate over the string from both ends and compare the characters at each Index.
    while (start < end) 
    {
        // Check if the first forward moving and last backward moving character are not equal.
        if (filteredS[start++] != filteredS[end--]) 
        {
            // If the both end's characters are not equal return false;
            return false;
        }
    }

    // If we reach here, the string is a palindrome.
    return true;
}
