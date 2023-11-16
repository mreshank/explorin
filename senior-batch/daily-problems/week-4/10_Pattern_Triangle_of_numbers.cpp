/**
    Problem Name    :   Pattern Triangle Of Numbers
    Problem Link    :   https://www.codingninjas.com/studio/problems/pattern-triangle-of-numbers_893293
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

#include <bits/stdc++.h> 
using namespace std; 

vector<string> TrianglePattern(int triangleHeight)
{
    // Variable to keep track of the current number to be printed
    int currentNumber = 0;

    // Vector to store the pattern
    vector<string> patternLines;

    // Loop over each row of the triangle
    for(int currentRow=1; currentRow<=triangleHeight; currentRow++) 
    {
        // String to store the current row of the pattern
        string currentLine = "";

        // Add spaces to the current line for the left padding of the triangle
        for(int spaceIndex=1; spaceIndex<=triangleHeight-currentRow; spaceIndex++)
        {
            currentLine += " ";
        }

        // Add numbers to the current line
        for (int numberIndex = 1; numberIndex <= currentRow * 2 - 1; numberIndex++) 
        {
            if (numberIndex <= currentRow)
            {
                currentLine += to_string(++currentNumber);
            }
            else
            {
                currentLine += to_string(--currentNumber);
            }
        }

        // Add the current line to the pattern
        patternLines.push_back(currentLine);
    }

    // Return the generated pattern
    return patternLines;
}
