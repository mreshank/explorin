/**
    Problem Name    :   Reverse Vowels of a String
    Problem Link    :   https://leetcode.com/problems/reverse-vowels-of-a-string/
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/


class Solution {
public:
    // # SECOND APPROACH :: BRUTE - NORMAL
    
    // Function to check if a character is a vowel
    bool isVowel(char character) 
    {
        return (character=='a'||character=='e'||character=='i'||character=='o'||character=='u'||
                character=='A'||character=='E'||character=='I'||character=='O'||character=='U');
    }

    // Function to reverse vowels in a string
    string reverseVowels(string inputString) 
    {
        // Copy of the input string
        string copiedString = inputString;
        // String to store the reversed vowels
        string reversedVowels = "";

        // Iterate over each character in the copied string
        for(char character : copiedString) 
        {
            // If the character is a vowel
            if(isVowel(character)) 
            {
                string tempString = "";
                tempString += character;
                // Add the vowel to the beginning of the reversed vowels string
                reversedVowels = tempString + reversedVowels;
            }
        }

        // Index for the reversed vowels string
        int vowelIndex = 0;
        // Replace the vowels in the copied string with the vowels in the reversed vowels string
        for(int i = 0; i < copiedString.size(); i++)
        {
            if(isVowel(copiedString[i]))
            {
                copiedString[i] = reversedVowels[vowelIndex++];
            }
        }

        // Return the copied string with the vowels reversed
        return copiedString;
    }
    
};
