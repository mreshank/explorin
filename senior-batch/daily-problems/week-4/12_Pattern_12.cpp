/**
    Problem Name    :   Pattern 12
    Problem Link    :   https://practice.geeksforgeeks.org/problems/double-triangle-pattern-1662664259/1
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

/* SOLUTION */
class Solution {
  public:
    void printTriangle(int triangleHeight) 
    {
        // Loop over each row from 1 to triangleHeight
        for(int currentRow=1; currentRow<=triangleHeight; currentRow++) 
        {
            // Print numbers from 1 to currentRow
            for(int number=1; number<=currentRow; number++)
            {
                cout << number << " ";
            }
            // Print spaces for the right padding of the triangle
            // The number of spaces is (triangleHeight - currentRow) * 2
            for(int spaceIndex=1; spaceIndex<=(triangleHeight-currentRow)*2; spaceIndex++)
            {
                cout << "  ";
            }
            // Print numbers from currentRow to 1
            for(int number=currentRow; number>=1; number--)
            {
                cout << number << " ";
            }
            // Print a newline character at the end of each row
            cout << endl;
        }
    }
};

/* SOLUTION ENDS */

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends