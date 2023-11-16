/**
    Problem Name    :   All Prime Numbers
    Problem Link    :   https://www.codingninjas.com/studio/problems/all-prime-numbers_624970
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int numberToCheck) 
{
	/* Loop from 2 to the square root of the number :-
	-> This is an optimization, as a larger factor of the number must be
	   a multiple of a smaller factor that has already been checked */
	for(int divisor = 2; divisor * divisor <= numberToCheck; divisor++) 
	{
		// If the number is divisible by any number other than 1 and itself, it's not prime
		if( numberToCheck % divisor == 0) 
		{
			return false;
		}
	}
	// If we've reached this point, the number is prime
	return true;
}

int main() 
{
	// Declare a variable for the upper limit of the range of numbers to check
	int upperLimit;

	// Take the upper limit from the user
	cin >> upperLimit;

	// Loop from 2 to the upper limit, because 2 is the first & least prime number.
	for(int currentNumber = 2; currentNumber <= upperLimit; currentNumber++) 
	{
		// If the current number is prime, print it
		if( isPrime(currentNumber) )
		{
			cout << currentNumber << endl;
		}
	}
}