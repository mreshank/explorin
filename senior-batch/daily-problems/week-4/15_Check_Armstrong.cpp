/**
    Problem Name    :   Check ArmStrong
    Problem Link    :   https://www.codingninjas.com/studio/problems/check-armstrong_589
    Solution Author :   Mr. Eshank Tyagi
    Solution Video  :   to-be-updated-soon
*/


bool isArmstrongNumber(int inputNumber)
{
	// Copy the input number to a new variable
	int numberCopy = inputNumber;

	// Calculate the length of the number
	int numberLength = to_string(numberCopy).length();

	// Variable to store the Armstrong number calculation
	int armstrongCalculation = 0;

	// Loop to calculate the Armstrong number
	while(numberCopy != 0)
	{
		// Add the last digit of the number copy raised to the power of the number length to the Armstrong calculation
		armstrongCalculation += pow(numberCopy % 10, numberLength);

		// Remove the last digit from the number copy
		numberCopy /= 10;
	}

	// If the input number is equal to the Armstrong calculation, it is an Armstrong number, return accordingly
	return (armstrongCalculation == inputNumber);
}