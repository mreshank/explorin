/**
    Problem Name    :   Compress the String
    Problem Link    :   https://www.codingninjas.com/studio/problems/compress-the-string_526
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/


string getCompressedString(string &input) 
{
    // Declare a variable `count` to store the count of consecutive occurrences of the current character.
    int count = 0;

    // Declare a string `str` to store the compressed string.
    string str = "";

    // Iterate over the characters in the input string.
    for (int i = 0; i < input.length(); i++) 
    {
        // Increment the count of consecutive occurrences of the current character.
        count++;

        // If the current character is not equal to the next character in the input string, then:
        if (input[i] != input[i + 1]) 
        {
            // Add the current character to the compressed string.
            str += input[i];

            // If the count of consecutive occurrences of the current character is greater than 1, then:
            if (count > 1) 
            {
                // Add the count of consecutive occurrences of the current character to the compressed string.
                str += to_string(count);
            }

            // Reset the count of consecutive occurrences of the current character.
            count = 0;
        }
    }

    // Return the compressed string.
    return str;
}

