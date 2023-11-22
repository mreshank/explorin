#include <iostream>
#include <vector>
using namespace std;
int linearSearch(vector<int> arr, int n, int x, int i = 0) {
    if (i == n) 
        return -1;
    if (arr[i] == x) 
        return i;
    return linearSearch(arr, n, x, i + 1);
}

int main() 
{
    cout << "\nStudent's Name\t: Mr. Eshank Tyagi"
         << "\nYear & Section\t: 2nd Yr - A (New)"
         << "\nLab's Subject\t: D.S.A Lab"
         << "\nCode's Question\t: Linear Search Implementation\n";
    vector<int> arr = { 2, 4, 6, 8, 10, 9, 7, 5, 3, 1 };
    int size = arr.size();
    int element = 5;
    int index = linearSearch(arr, size, element);
    cout << "In the Array : ";
    for(int i : arr)
        cout << i << " ";
    if (index == -1) 
        cout << "\nElement " << element << " not found" << endl;
    else 
        cout << "\nElement " << element << " found at index " << index << endl;
    return 0;
}

/*
OUTPUT :-
Student's Name  : Mr. Eshank Tyagi
Year & Section  : 2nd Yr - A (New)
Lab's Subject   : D.S.A Lab
Code's Question : Linear Search Implementation
In the Array : 2 4 6 8 10 9 7 5 3 1 
Element 5 found at index 7
*/