/**
    Problem Name    :   Print The Pattern	# 1st Approach  
    Problem Link    :   https://www.codingninjas.com/studio/problems/print-the-pattern_893299
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

#include <bits/stdc++.h> 
using namespace std; 

vector<string> printPattern(int patternSize)
{
	// Vector to store the pattern
	vector<string> patternLines;

	// Variable to keep track of the current number to be printed
	int currentNumber = 1;

	// Variable to keep track of the current index for insertion in the vector
	int currentIndex = 0;

	// Loop over each line of the pattern
	for(int lineIndex = 0; lineIndex < patternSize; lineIndex++) 
	{
		// String to store the current line of the pattern
		string currentLine = "";

		// Generate the numbers for the current line
		for(int numberIndex = 0; numberIndex < patternSize; numberIndex++) 
		{
			currentLine += to_string( currentNumber++ ) + " ";
		}

		// Insert the current line at the correct position in the vector
		patternLines.insert(patternLines.begin() + currentIndex, currentLine);

		// If the line index is even, increment the current index for the next insertion
		if(lineIndex % 2 == 0) 
		{
			currentIndex++;
		}
	}

	// Return the generated pattern
	return patternLines;
}
