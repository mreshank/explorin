/**
    Problem Number  :   1(A)
    Problem Name    :   Red Light, Green Light
    Problem Link    :   https://www.codechef.com/problems/DOLL
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Declare and inputting the number of test cases.
     TestCases;
    cin >> TestCases;

    // Iterate over the test cases.
    while (TestCases-- > 0) 
    {

        // Declare and input the number of players and the height of Ali and GiHun.
        int NumberOfPlayers, HeightOfAliAndGiHun;
        cin >> NumberOfPlayers >> HeightOfAliAndGiHun;

        // Initialize the number of players to shoot to 0.
        int NumberOfPlayersToShoot = 0;

        // Iterate over the players adding between Ali and Gi-Hun.
        while (NumberOfPlayers-- > 0) 
        {

            // Declare the height of the new player.
            int HeightOfNewPlayer;
            cin >> HeightOfNewPlayer;

            // Check if the new player is taller than Ali and GiHun.
            if (HeightOfNewPlayer > HeightOfAliAndGiHun) 
            {
                // Increment the number of players to shoot by 1.
                NumberOfPlayersToShoot += 1;
            }
        }

        // Print the minimum number of players to shoot.
        cout << NumberOfPlayersToShoot << endl;
    }

    // Return 0 to indicate success.
    return 0;
}
