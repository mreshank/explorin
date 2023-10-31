/**
    Problem Name    :   Check Permutation
    Problem Link    :   https://www.codingninjas.com/studio/problems/check-permutation_1262349
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

// #include <bits/stdc++.h> // could be included, but not necessary after iostream and cstring
#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) 
{
    // Create a hash table to store the character frequencies of the two strings.
    int hash[1500] = {0};

    /* Iterate over the characters in the first string and the second string and increment
       the corresponding frequency of all characters in both the strings in the hash table. */
    for (int i = 0; input1[i] != '\0'; i++) 
    {
        hash[input1[i]]++;
        hash[input2[i]]++;
    }

    /* Check if all the character frequencies in the hash table are multiple of 2, 
       i.e., if 'x' occurs in both strings once, then the final frequency will be 2, 
       if it occurs twice in each string then frequency would be 4. If so, then the two
       strings are permutations of each other.It is checking all char from 'A' to 'z'*/
    for (int i = 'A'; i <= 'z'; i++) 
    {
        if (hash[i] %2 != 0) 
        {
            return false;
        }
    }

    // Return true if all the character frequencies are multiple of 2, else return false.
    return true;
}

// This is the pre-written main function to take input and print the reversed string.
int main() {

    int size = 1e6;

    // Defining two character arrays / string of size 1e6
    char str1[size];
    char str2[size];

    // Taking input into both the character arrays / strings
    cin >> str1 >> str2;

    // If its a permutation, the printing true, else false using ternary operator.
    cout << (isPermutation(str1, str2) ? "true" : "false");
}