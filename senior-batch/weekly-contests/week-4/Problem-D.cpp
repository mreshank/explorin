/**
    Problem Number  :   4(D)
    Problem Name    :   CodeChef Streak
    Problem Link    :   https://www.codechef.com/problems/CS2023_STK
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

#include <bits/stdc++.h>
using namespace std;

// This function reads the elements of the given array from the console.
void getInput(int * Array, int Size) 
{
    // Declare an index variable.
    int index = 0;

    // Iterate over the array and read the elements from the console.
    while (Size-- > 0) 
    {
        cin >> Array[index++];
    }
}

// This function returns the maximum streak of consecutive Non-Zero values in the given array.
int getMax(int Array[], int Size) 
{
    // Declare variables to store the maximum streak and the current streak.
    int MaximumStreak = 0, CurrentStreak = 0;

    // Iterate over the array and update the maximum streak and the current streak.
    for (int i = 0; i < Size; i++) 
    {   
        // If the current element is 0, i.e., no problem solved on the ith day, then:
        if (Array[i] == 0) 
        {
            // The current streak is reset to 0.
            CurrentStreak = 0;
        } 
        else 
        {
            // If the current element is not zero, then the current streak is incremented.
            CurrentStreak++;
        }

        // Update the maximum streak if the current streak is greater than the maximum streak.
        MaximumStreak = max(MaximumStreak, CurrentStreak);
    }

    // Return the maximum streak.
    return MaximumStreak;
}

int main() {
    // Declare a variable to store the number of test cases.
    int TestCases;

    // Read the number of test cases from the console.
    cin >> TestCases;

    // Iterate over the test cases.
    while (TestCases--) 
    {
        // Declare variables to store the number of days and the arrays for Om and Addy.
        int NumberOfDays;
        int Om[100001] = {0};
        int Addy[100001] = {0};

        // Read the number of days from the console.
        cin >> NumberOfDays;

        // Read the elements of the arrays for Om and Addy from the console.
        getInput(Om, NumberOfDays);
        getInput(Addy, NumberOfDays);

        // Get the maximum streak of consecutive 1s in the arrays for Om and Addy.
        int MaximumStreakOfOm = getMax(Om, NumberOfDays);
        int MaximumStreakOfAddy = getMax(Addy, NumberOfDays);

        // Determine the winner based on the maximum streak of consecutive 1s in the arrays for Om and Addy.
        if (MaximumStreakOfOm > MaximumStreakOfAddy) 
        {
            cout << "Om" << endl;
        } 
        else if (MaximumStreakOfOm < MaximumStreakOfAddy) 
        {
            cout << "Addy" << endl;
        } 
        else 
        {
            cout << "Draw" << endl;
        }
    }

    return 0;
}