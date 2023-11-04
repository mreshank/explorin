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
  
    // # THIRD APPROACH :: CONDITIONAL LADDER APPROACH

    string convertToRoman(int decimalNumber) 
    {
        // Initialize the Roman numeral string
        string romanNumeral = "";

        // While the decimal number is not 0
        while(decimalNumber != 0) 
        {
            // Check for each Roman numeral starting from the largest (1000)
            if(decimalNumber >= 1000){
                romanNumeral += "M";
                decimalNumber -= 1000;
            }
            else if(decimalNumber >= 900){ 
                romanNumeral += "CM";
                decimalNumber -= 900;
            }
            else if(decimalNumber >= 500){
                romanNumeral += "D";
                decimalNumber -= 500;
            }
            else if(decimalNumber >= 400){
                romanNumeral += "CD";
                decimalNumber -= 400;
            }
            else if(decimalNumber >= 100){
                romanNumeral += "C";
                decimalNumber -= 100;
            }
            else if(decimalNumber >= 90){
                romanNumeral += "XC";
                decimalNumber -= 90;
            }
            else if(decimalNumber >= 50){
                romanNumeral += "L";
                decimalNumber -= 50;
            }
            else if(decimalNumber >= 40){
                romanNumeral += "XL";
                decimalNumber -= 40;
            }
            else if(decimalNumber >= 10){
                romanNumeral += "X";
                decimalNumber -= 10;
            }
            else if(decimalNumber >= 9){
                romanNumeral += "IX";
                decimalNumber -= 9;
            }
            else if(decimalNumber >= 5){
                romanNumeral += "V";
                decimalNumber -= 5;
            }
            else if(decimalNumber >= 4){
                romanNumeral += "IV";
                decimalNumber -= 4;
            }
            else if(decimalNumber >= 1){
                romanNumeral += "I";
                decimalNumber -= 1;
            }
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