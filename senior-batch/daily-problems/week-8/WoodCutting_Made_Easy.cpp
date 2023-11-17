/**
    Problem Name    :   WoodCutting Made Easy
    Problem Link    :   https://www.interviewbit.com/problems/woodcutting-made-easy/
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

int Solution::solve(vector<int> &A, int B) 
{
    // Initializing maximumHeight to the minimum possible value of an integer and count of wood peices to 0
    int maximumHeight = INT_MIN, count = 0;

    // Finding the maximum value in the vector arr
    for (int currentTreeHeight : A)
    {
        maximumHeight = max(maximumHeight, currentTreeHeight);
    }

    // Starting `expectedHeight` from the maximum value (Maximum height tree's top-most unit of wood log) in the 
    // vector arr, we move down one unit at a time and check how many pieces of wood can be cut of length `expectedHeight`
    for (int expectedHeight = maximumHeight; expectedHeight >= 0; expectedHeight--) 
    {
        //After moving each unit of wood, we check for all the trees (values in array) if its greater than or 
        // equal to the current height we are seeking for, if so, then increase the count of wood peices.
        for (int currentHeight = 0; currentHeight < A.size(); currentHeight++)
        {
            if (A[currentHeight] >= expectedHeight) 
            {
                count++;
            }
        }

        // If the number of pieces of wood that can be cut of length expectedHeight is greater than or equal to B, we return expectedHeight-1
        if (count >= B) 
        {
            return expectedHeight-1;
        }
    }
}