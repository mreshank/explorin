/***
    Problem Name    :   Find the Difference
    Problem Link    :   https://leetcode.com/problems/find-the-difference/description/
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/
    

class Solution {
public:

    // Function to find the difference between two strings
    char findTheDifference(string firstString, string secondString) 
    {
        // Initialize an array to count the occurrences of each character
        int characterCount[1001] = {0}, currentIndex = 0;

        // Iterate over each character in the second string
        for(; currentIndex < secondString.size(); currentIndex++) 
        {
            // Increment the count for the character in the first string
            characterCount[firstString[currentIndex]]++;
            // Increment the count for the character in the second string
            characterCount[secondString[currentIndex]]++;
        }
        // Increment the count for the last character in the second string
        characterCount[secondString[currentIndex]]++;

        // Iterate over the character count array
        for(int i = 0; i <= 1001; i++)
        {
            // If the count for a character is odd
            if(characterCount[i] % 2 != 0)
            {
                // Return that character
                return i;
            }
        }

        // If no character has an odd count, return the null character
        return '\0';
    }
}; 
