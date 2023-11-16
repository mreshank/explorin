/**
    Problem Name    :   Equal point in a string of brackets
    Problem Link    :   https://practice.geeksforgeeks.org/problems/find-equal-point-in-string-of-brackets2542/1
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int findIndex(string inputString) 
    {
        // Initialize a counter for the closing brackets
        int closingBracketsCount = 0;

        // Iterate over each character in the string
        for(char currentCharacter : inputString) 
        {
            // If the character is a closing bracket
            if(currentCharacter == ')')
            {
                // Increment the closing brackets counter
                closingBracketsCount++;
            }
        }
        // Return the index of saturation 
        return closingBracketsCount;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.findIndex(s)<<endl;
	}
}
// } Driver Code Ends
