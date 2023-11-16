/**
    Problem Name    :   Search for a range
    Problem Link    :   https://www.interviewbit.com/problems/search-for-a-range/
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/


vector<int> Solution::searchRange(const vector<int> &A, int B) 
{
    // initialize start and end indices
    int start = 0, end = A.size() - 1;
    
    // initialize answer vector with -1 values
    vector<int> ans = {-1, -1};
    
    // loop until start index is less than or equal to end index
    while (start <= end) 
    {
        // if both start and end indices have the target value, update answer vector and break loop
        if (A[start] == A[end] && A[end] == B) 
        {
            ans[0] = start; 
            ans[1] = end; 
            break; 
        }
        
        // if start index does not have the target value, increment start index
        if (A[start] != B) 
        {
            start++;
        }

        // if end index does not have the target value, decrement end index
        if (A[end] != B) 
        {
            end--;
        }
    }
    
    // return answer vector
    return ans;
}