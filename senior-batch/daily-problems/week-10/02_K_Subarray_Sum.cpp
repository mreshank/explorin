/**
    Problem Name    :   K Subarray Sum 
    Problem Link    :   https://www.geeksforgeeks.org/problems/k-subarray-sum/0
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/


#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int testCases; // Number of test cases
    cin >> testCases;

    while (testCases-- > 0)
    {
        int arraySize, subArraySize, topSumsCount, index, sum = 0;
        cin >> arraySize >> subArraySize >> topSumsCount;
        
        // Dynamic array to store the elements of the array
        int *array = new int[arraySize]; 
        // Vector to store the sums of subarrays
        vector<int> subArraySums; 
        
        // Input the elements of the array
        for (index = 0; index < arraySize; index++)
            cin >> array[index]; 

        // Calculate the sum of the first subArraySize elements
        for (int index = 0; index < subArraySize; index++)
            sum += array[index];
        
        // Add the sum to the vector
        subArraySums.push_back(sum); 

        // Calculate the sum of subsequent subarrays of length subArraySize
        for (int index = subArraySize; index < arraySize; index++)
        {
            // Update the sum by removing the first element of the previous subarray and adding the next element
            sum = sum - array[index - subArraySize] + array[index]; 
            // Add the sum to the vector
            subArraySums.push_back(sum); 
        }
        
        // Sort the vector in ascending order
        sort(subArraySums.begin(), subArraySums.end()); 

        // Print the topSumsCount largest sums
        for (int index = 0; index < topSumsCount; index++)
        {
            // Print the last element of the vector
            cout << subArraySums.back() << " "; 
            // Remove the last element from the vector
            subArraySums.pop_back(); 
        }
        
        // Print a new line after each test case
        cout << endl; 
    }

    return 0;
}