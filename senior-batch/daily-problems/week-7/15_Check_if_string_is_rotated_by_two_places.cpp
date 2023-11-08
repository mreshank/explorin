/**
    Problem Name    :   Check if string is rotated by two places
    Problem Link    :   https://practice.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
	
	bool isRotated(string originalString, string possibleRotatedString) {
		// Check if the possible rotated string is equal to the original string rotated by two places to the right or to the left
		return (
			// Check if the possible rotated string is equal to the original string rotated by two places to the right
			originalString.substr(2) + originalString.substr(0, 2) == possibleRotatedString  ||  
			// Check if the possible rotated string is equal to the original string rotated by two places to the left
			originalString.substr(originalString.size() - 2) + originalString.substr(0, originalString.size() - 2) == possibleRotatedString
		);
	}

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends
