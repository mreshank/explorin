#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

// Recursive implementation of Binary Search
int binarySearch(vector<int>& arr, int low, int high, int target) {
    if (low > high) 
        return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == target) 
        return mid;
    else if (arr[mid] > target) 
        return binarySearch(arr, low, mid - 1, target);
    else 
        return binarySearch(arr, mid + 1, high, target);
}

int main() 
{
    cout << "\nStudent's Name\t: Mr. Eshank Tyagi"
         << "\nYear & Section\t: 2nd Yr - A (New)"
         << "\nLab's Subject\t: D.S.A Lab"
         << "\nCode's Question\t: Binary Search Implementation\n";
    vector<int> arr = {1, 8, 3, 6, 5, 7, 4, 9, 0, 2};
    int target = 5;
    // Perform Binary Search
    int result = binarySearch(arr, 0, arr.size() - 1, target);
    cout << "In the Array : ";
    for(int i : arr)
        cout << i << " ";
    cout << "\nTarget "<< target << (result == -1 ? " not found" : " found at index "+to_string(result) ) << endl;
    return 0;
}

/*
OUTPUT :-
Student's Name  : Mr. Eshank Tyagi
Year & Section  : 2nd Yr - A (New)
Lab's Subject   : D.S.A Lab
Code's Question : Binary Search Imp.
In the Array : 1 8 3 6 5 7 4 9 0 2 ,
Target 5 found at index 4
*/