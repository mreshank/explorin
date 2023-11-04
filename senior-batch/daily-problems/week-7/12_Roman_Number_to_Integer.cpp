/**
    Problem Name    :   Roman Number to Integer
    Problem Link    :   https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/


//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:

    int romanToDecimal(string &romanNumber) 
    {
        // Initialize the decimal number to 0
        int decimalNumber = 0;

        // Initialize previous and current values to 0
        int previousValue = 0, currentValue = 0;

        // Map of Roman numerals to their decimal values
        unordered_map<char, int> romanToDecimalMap = {{'I', 1},{'V', 5},{'X', 10},{'L',50},{'C',100},{'D',500},{'M',1000}};

        // Loop through the string from end to start
        for(int i = romanNumber.size()-1; i >= 0; i--) 
        {
            // Get the decimal value of the current Roman numeral
            currentValue = romanToDecimalMap[romanNumber[i]];

            // If the previous value is less than or equal to the current value, add the current value to the decimal number
            if(previousValue <= currentValue)
            {
                decimalNumber += currentValue;
            }
            // If the previous value is greater than the current value, subtract the current value from the decimal number
            else
            {
                decimalNumber -= currentValue;
            }

            // Set the current value as the previous value for the next iteration
            previousValue = currentValue;
        }

        // Return the decimal number
        return decimalNumber;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends