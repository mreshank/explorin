/**
    Problem Name    :   Reverse Vowels of a String
    Problem Link    :   https://leetcode.com/problems/reverse-vowels-of-a-string/
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/


class Solution {
public:
 
    // # FIRST APPROACH :: OPTIMIZED - TWO POINTER APPROACH

    // Function to check if a character is a vowel
    bool isVowel(char character) 
    {
        return (character=='a'||character=='e'||character=='i'||character=='o'||character=='u'||
                character=='A'||character=='E'||character=='I'||character=='O'||character=='U');
    }

    // Function to reverse vowels in a string
    string reverseVowels(string inputString) 
    {
        // Initialize two pointers, one at the start of the string and one at the end
        int startPointer = 0, endPointer = inputString.size()-1;

        // While the start pointer is less than the end pointer
        while(startPointer < endPointer) 
        {
            // If the character at the start pointer is not a vowel, increment the start pointer
            if(!isVowel(inputString[startPointer])) 
            {
                startPointer++; 
            }
            // If the character at the end pointer is not a vowel, decrement the end pointer
            if(!isVowel(inputString[endPointer])) 
            {
                endPointer--; 
            }
            // If the characters at both the start pointer and the end pointer are vowels, swap them and move the pointers
            if(isVowel(inputString[startPointer]) && isVowel(inputString[endPointer])) 
            {
                swap(inputString[startPointer++], inputString[endPointer--]); 
            }
        }
        // Return the string with the vowels reversed
        return inputString;
    }
};
