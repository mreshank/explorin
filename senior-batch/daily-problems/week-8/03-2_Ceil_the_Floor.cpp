/**
    Problem Name    :   Ceil the Floor
    Problem Link    :   https://www.codingninjas.com/studio/problems/ceiling-in-a-sorted-array_1825401
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/


pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int x) 
{
    // Initialize start and end indices of the array arr.
    int start = 0, end = n-1;

    // Initialize flags to check if floor and ceil of x exist in the array arr.
    bool floorFound = false, ceilFound = false;

    // Loop until start and end indices meet.
    while (start < end) 
    { 
        // If the next element is also less than or equal to 'x', shift the position to next.
        if (arr[start+1] <= x) 
        {
            start++;
        }
        // If the next element is greater than 'x', then the current element could be the floor of x.
        else 
        {
            floorFound = true;
        }

        // If the previous element is also greater than or equal to 'x', shift the position to previous.
        if (arr[end-1] >= x) 
        { 
            end--;
        }
        // If the previous element is less than 'x', then the current element could be the ceil of x.
        else
        {
            ceilFound = true;
        }
        
        // If both floor and ceil of x are found, break the loop.
        if(floorFound && ceilFound) break;
    }
    
    // If the start index is greater than x, then x is not present in the array arr, 
    // and the floor of x is -1 for default as asked by the question.
    // Otherwise, the floor of x is the element at index start.
    start = ( arr[start] > x ) ? -1 : arr[start];

    // If the end index is less than x, then x is not present in the array arr, 
    // and the ceil of x is -1 for default as asked by the question.
    // Otherwise, the ceil of x is the element at index end.
    end = ( arr[end] < x ) ? -1 : arr[end];

    // Return a pair of integers, the first integer is the floor of x in the array 'arr', 
    // and the second integer is the ceil of x in the array arr.
    return make_pair(start, end); 
}