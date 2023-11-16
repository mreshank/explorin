/**
    Problem Name    :   Ceil the Floor
    Problem Link    :   https://www.codingninjas.com/studio/problems/ceiling-in-a-sorted-array_1825401
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int x) 
{
    // A pair of integers to store the floor and ceiling of 'x'.
    pair<int, int> ans {-1, -1}; 
    
    // Loop through the vector 'arr'.
    for (int element : arr) 
    { 
        // If the current element is less than or equal to 'x', update the floor.
        if (element <= x) 
        {
        	ans.first = element;
        }

        // If the current element is greater than or equal to 'x' then update the ceiling. 
      	if (element >= x) 
        { 
            ans.second = element;
        	break;
    	}
    }

    // Return the pair of integers representing the floor and ceiling of 'x'.
    return ans; 
}

