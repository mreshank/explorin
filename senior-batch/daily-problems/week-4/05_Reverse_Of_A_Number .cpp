/**
    Problem Name    :   Reverse Of A Number
    Problem Link    :   https://www.codingninjas.com/studio/problems/reverse-of-a-number_624652
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

#include<iostream>
using namespace std;

int main() 
{
	// Declare variables for the input number and the reversed number
	int inputNumber, reversedNumber = 0;

	// Take the input number from the user
	cin >> inputNumber;

	// Loop until the input number is not 0
	while (inputNumber != 0) {
		// Multiply the reversed number by 10 and add the last digit of the input number
		reversedNumber = reversedNumber * 10 + inputNumber % 10;

		// Remove the last digit from the input number
		inputNumber /= 10;
	}

	// Print the reversed number
	cout << reversedNumber << endl;
}