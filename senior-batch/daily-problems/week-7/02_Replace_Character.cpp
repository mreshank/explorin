/**
    Problem Name    :   Replace Character
    Problem Link    :   https://www.codingninjas.com/studio/problems/replace-character_625036
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

void replaceCharacter(char input[], char c1, char c2) 
{
    // Iterate over the characters in the string `input`.
    for (int i = 0; input[i] != '\0'; i++) 
    {
        // If the current character is equal to `c1`, replace it with `c2`.
        if (input[i] == c1) 
        {
            input[i] = c2;
        }
    }
}
