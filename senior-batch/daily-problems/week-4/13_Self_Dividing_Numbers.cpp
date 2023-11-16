/**
    Problem Name    :   Self Dividing Numbers
    Problem Link    :   https://leetcode.com/problems/self-dividing-numbers/
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

#include <bits/stdc++.h>  // No Need to write this
using namespace std;  // No Need to write this

class Solution {
    public:
    vector<int> findSelfDividingNumbers(int startRange, int endRange) 
    {
        // Vector to store the self-dividing numbers
        vector<int> selfDividingNumbers;

        // Loop over each number in the given range
        for(int currentNumber=startRange; currentNumber<=endRange; currentNumber++) 
        {
            int tempNumber = currentNumber;
            bool isSelfDividing = true;

            // Check each digit of the current number
            while(tempNumber!=0) 
            {
                int digit = tempNumber%10;

                // If the digit is 0 or the current number is not divisible by the digit
                if(digit==0 || currentNumber%digit!=0) 
                {
                    isSelfDividing = false;
                    break;
                }

                // Remove the last digit from tempNumber
                tempNumber /= 10;
            }

            // If the current number is self-dividing, add it to the vector
            if(isSelfDividing)
            {
                selfDividingNumbers.push_back(currentNumber);
            }
        }

        // Return the vector of self-dividing numbers
        return selfDividingNumbers;
    }
};