
/**
    Problem Name    :   Implement Upper Bound
    Problem Link    :   https://www.codingninjas.com/studio/problems/implement-upper-bound_8165383
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/


int upperBound(vector<int> &arr, int x, int n) 
{
    int start = 0, end = n-1, mid;

    // If the first element is greater than x, then return 0
    if(arr[start] > x) 
    {
        return start;
    }

    // If the last element is less than or equal to x, then return n
    if(arr[end] <= x) 
    {
        return n;
    }

    // Binary search to find any occurance / index of the element equal to x
    while (start <= end) 
    {
        mid = (start + end) / 2;
        if (arr[mid] == x)
        {
            break;
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    // If the element is found, then move to the last-most occurance of the same element
    while(mid != n && arr[mid] <= x)
    {
        mid++;
    }

    return mid;
}