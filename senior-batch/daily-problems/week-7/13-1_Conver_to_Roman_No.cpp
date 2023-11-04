/**
    Problem Name    :   Convert to Roman No
    Problem Link    :   https://practice.geeksforgeeks.org/problems/convert-to-roman-no/1
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
  
    // # FIRST APPROACH :: OPTIMIZED - REVISITED
    
    string convertToRoman(int decimalNumber) {
        // Vector of pairs where each pair contains a decimal number and its corresponding Roman numeral
        vector<pair<int, string>> decimalToRomanMap = { {1000,"M"}, {900,"CM"}, {500,"D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, 
                                                        {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"} };
        // Initialize the Roman numeral string
        string romanNumeral = "";  
        // Initialize the index for the vector before loop to optimize it, and not run unnecessary.
        int index = 0;

        // While the decimal number is not 0
        while(decimalNumber != 0) 
            // For each pair in the decimal to Roman map
            for(; index < decimalToRomanMap.size(); index++)
                // If the decimal number is greater than or equal to the first element of the current pair
                if(decimalNumber >= decimalToRomanMap[index].first) {
                    // Add the second element of the current pair to the Roman numeral string
                    romanNumeral += decimalToRomanMap[index].second;
                    // Subtract the first element of the current pair from the decimal number
                    decimalNumber -= decimalToRomanMap[index].first;
                    // Break the inner loop
                    break;
                }
        // Return the Roman numeral string
        return romanNumeral;
    }
    
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		Solution ob;
    	cout << ob.convertToRoman(N) << endl;
	}
	return 0;
}
// } Driver Code Ends