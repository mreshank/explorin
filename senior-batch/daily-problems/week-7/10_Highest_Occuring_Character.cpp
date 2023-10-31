/**
    Problem Name    :   Highest Occuring Character
    Problem Link    :   https://www.codingninjas.com/studio/problems/highest-occurring-character_624400
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

char highestOccurringChar(char input[]) 
{
  	// Declare a variable `maxIndex` to store the index of the character that occurs the most number of times.
  	int maxIndex = 0;

  	// Declare an array `alpha` to store the frequency of each character in the input string.
  	int alpha[256] = {0};

  	// Iterate over the characters in the input string and update the frequency array.
  	for (int i = 0; input[i] != '\0'; i++) 
	{
    	alpha[input[i]]++;
  	}

  	// Iterate over the frequency array and find the index of the character that occurs the most number of times.
  	for (int i = 'a'; i <= 'z'; i++) 
	{
    	if (alpha[i] > alpha[maxIndex]) 
		{
      		maxIndex = i;
    	}
  	}

  	// Return the character that occurs the most number of times.
  	return maxIndex;
}