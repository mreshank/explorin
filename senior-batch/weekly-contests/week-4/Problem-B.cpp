/**
    Problem Number  :   2(B)
    Problem Name    :   Largest and Second Largest
    Problem Link    :   https://www.codechef.com/problems/LARGESECOND
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // Declare a variable `TestCases` to store the number of test cases.
    int TestCases;

    // Read the number of test cases from the console.
    cin >> TestCases;

    // Iterate over the test cases.
    while (TestCases--) 
    {
        /* Declare variables `SizeOfArray` and `Copy_SizeOfArray` to store the
           size of the array and a copy of the size of the array, respectively. */
        int SizeOfArray, Copy_SizeOfArray;

        // Read the size of the array from the console.
        cin >> SizeOfArray;

        // Copy the size of the array to the variable `Copy_SizeOfArray`.
        Copy_SizeOfArray = SizeOfArray;

        // Declare an array `Array` of size `100001` to store the elements of the array.
        int Array[100001] = {0}, index = 0; // And index to store the last element's index +1

        // Read the elements of the array from the console.
        while (Copy_SizeOfArray-- > 0) 
        {
            cin >> Array[index++];
        }

        /* If the size of the array is less than 2, i.e., there is no second largest 
           term or even any term to add, then return 0. */
        if (SizeOfArray < 2) 
        {
            return 1;
        }

        // Sort the array in ascending order.
        sort(Array, Array + SizeOfArray);

        // Iterate over the array from the end.
        for (int i = SizeOfArray - 1; i > 0; i--) 
        {
            /* If the current element is not equal to the previous element, i.e., two descrete 
               elements have been found and they are the largest and the second largest, then: */
            if (Array[i] != Array[i - 1]) 
            {
                // Print the sum of the current element and the previous element to the console.
                cout << (Array[i] + Array[i - 1]) << endl;

                // Break out of the loop, as we are done with the required output.
                break;
            }
        }
    }
    // Successfull end of runnning all the testcases 
    return 0;
}
