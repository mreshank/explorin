/**
    Problem Name    :   Print The Pattern	# 2nd Approach
    Problem Link    :   https://www.codingninjas.com/studio/problems/print-the-pattern_893299
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

#include <bits/stdc++.h> 
using namespace std; 

/* Second Approach */
vector<string> printPattern(int patternSize)
{
	// Vector to store the pattern
	vector<string> patternLines;

	// Variable to keep track of the current number to be printed
	int currentNumber = 1;

	// Variables to keep track of the start and end indices for insertion in the array
	int startIndex = 0, endIndex = patternSize - 1;

	// 2D array to store the pattern
	int patternArray[patternSize][patternSize];

	// Loop over each line of the pattern
	for(int lineIndex = 0; lineIndex < patternSize; lineIndex++) 
	{ 
		// If the line index is even, fill the start row of the array
		if (lineIndex % 2 == 0) { 
			for (int columnIndex = 0; columnIndex < patternSize; columnIndex++) { 
				patternArray[startIndex][columnIndex] = currentNumber; 
				currentNumber++;
			} 
			startIndex++; 
		} 
		// If the line index is odd, fill the end row of the array
		else { 
			for (int columnIndex = 0; columnIndex < patternSize; columnIndex++) { 
				patternArray[endIndex][columnIndex] = currentNumber; 
				currentNumber++; 
			} 
			endIndex--; 
		} 
	}

	// Convert the pattern array to a vector of strings
	for (int rowIndex = 0; rowIndex < patternSize; rowIndex++)
	{
		string currentLine = ""; 
		for (int columnIndex = 0; columnIndex < patternSize; columnIndex++)
		{
			currentLine = currentLine + to_string(patternArray[rowIndex][columnIndex]) + " ";
		}
		patternLines.push_back(currentLine);
	}

	// Return the generated pattern
	return patternLines;
}

