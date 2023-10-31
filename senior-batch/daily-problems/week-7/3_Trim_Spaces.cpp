/**
    Problem Name    :   Trim Spaces
    Problem Link    :   https://www.codingninjas.com/studio/problems/trim-spaces_625037
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

void trimSpaces(char input[]) 
{
    // Declare a variable `in` to track the index of the next non-whitespace character.
    int index = 0;

    // Iterate over the characters in the string `input`.
    for (int i = 0; input[i] != '\0'; i++) 
    {
        // If the current character is not a whitespace character, copy it to the `in` index.
        if (input[i] != ' ') 
        {
            input[index++] = input[i];
        }
    }

    // Terminate the string at the index `in`.
    input[index] = '\0';
}

