/**
    Problem Name    :   Palindrome Number 
    Problem Link    :   https://leetcode.com/problems/palindrome-number/
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/
class Solution {
public:
    bool isPalindrome(int inputNumber) 
    {
        // If the input number is negative, it cannot be a palindrome
        if(inputNumber < 0) return false;

        // Copy the input number to a long variable to avoid overflow
        long numberCopy = inputNumber;

        // Variable to store the reversed number
        long reversedNumber = 0;

        // Loop to reverse the number
        while(numberCopy != 0) 
        {
            // Multiply the reversed number by 10 and add the last digit of the number copy
            reversedNumber = reversedNumber * 10 + numberCopy % 10;

            // Remove the last digit from the number copy
            numberCopy /= 10;
        }

        // If the input number is equal to the reversed number, it is a palindrome, return accordingly.
        return (inputNumber == reversedNumber);
    }
};