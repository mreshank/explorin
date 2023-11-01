/**
    Problem Number  :   3(C)
    Problem Name    :   Andrew and the Meatballs
    Problem Link    :   https://www.codechef.com/problems/AMMEAT
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // Declare a variable `TestCases` to store the number of test cases.
    int TestCases;

    // Read the number of test cases from the console.
    cin >> TestCases;

    // Iterate over the test cases.
    while (TestCases-- > 0) 
    {
        /* Declare variables `NumberOfPlates` and `TargetCapacity` to store the 
           size of the array and the target capacity of the meatballs, respectively. */
        int NumberOfPlates;
        long long int TargetCapacity;

        // Read the size of the array and the target capacity from the console.
        cin >> NumberOfPlates >> TargetCapacity;

        /* Declare an array ` Plates` of size `7` to store the capacity of each plate, and a
           variable `index` to track the index of the next plate to be inserted the capacity of. */
        long long int  Plates[7] = {0}, index = 0;

        // Read the Capacities of the Plates from the console.
        for (int i = 0; i < NumberOfPlates; i++) 
        {
            cin >>  Plates[index++];
        }

        // Sort the Capacity of plates in ascending order.
        sort( Plates,  Plates + NumberOfPlates);

        // Declare a variable `CurrentCapacity` to store the current capacity of plates to hold meatballs.
        long long int CurrentCapacity = 0;

        // Declare a variable `NumberOfPlatesNeeded` to store the minimum number of plates needed to reach the target capacity.
        int NumberOfPlatesNeeded = 0;

        // Iterate over the Plates array in reverse order of the capacity, starting from the highest capacity.
        for (int i = NumberOfPlates - 1; i >= 0; i--) 
        {
            // Add the current Plate's capacity to the current capacity.
            CurrentCapacity +=  Plates[i];

            // Increment the maximum number of plates needed to reach the target capacity.
            NumberOfPlatesNeeded++;

            // If the current capacity is greater than or equal to the target capacity, then break out of the loop.
            if (CurrentCapacity >= TargetCapacity) 
            {
                break;
            }
        }

        // Check if the current capacity is greater than or equal to the target capacity.
        if (CurrentCapacity >= TargetCapacity) 
        { 
            // Print the number of plates needed to reach the target number of meatballs.
            cout << NumberOfPlatesNeeded << endl;
        }

        // Otherwise, the target capacity cannot be achieved.
        else 
        {
            cout << -1 << endl;
        }
    }
    return 0;
}