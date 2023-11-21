/**
    Problem Name    :   Count pairs with given sum
    Problem Link    :   https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/


int getPairsCount(int arr[], int n, int k) 
{
    // Initialize pairCount variable to store the number of pairs
    int pairCount = 0; 
    // Variable to store the remainder
    int remainder; 
    
    // Create an unordered map to store the frequency of elements
    unordered_map<int, int> frequencyMap; 

    // Iterate through the arr
    for(int i = 0; i < n; i++) 
    {
        // Calculate the remainder required to get the k
        remainder = k - arr[i]; 

        // Check if the remainder exists in the frequencyMap
        if(frequencyMap.find(remainder) != frequencyMap.end()) 
            // Increment the pairCount by the frequency of the remainder
            pairCount += frequencyMap[remainder]; 
        
        // Increment the frequency of the current element in the frequencyMap
        frequencyMap[arr[i]]++; 
    }
    
    // Return the count of pairs with the given sum
    return pairCount; 
}