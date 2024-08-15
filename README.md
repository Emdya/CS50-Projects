Assignment Overview
Objective:
Implement a program that validates credit card numbers using the Luhn algorithm and identifies the card type (e.g., Visa, MasterCard, American Express).

Key Requirements
Luhn Algorithm Validation:
Input: The program should accept a credit card number as input from the user.
Algorithm: Implement the Luhn algorithm to check if the credit card number is valid. The Luhn algorithm is a simple checksum formula used to validate various identification numbers.
Card Type Identification:
Visa: Starts with a 4 and has 13 or 16 digits.
MasterCard: Starts with a 5 and has 16 digits.
American Express: Starts with a 34 or 37 and has 15 digits.
Output:
If the credit card number is valid according to the Luhn algorithm, print the card type (e.g., "VISA," "MASTERCARD," "AMEX").
If the credit card number is invalid, print "INVALID."
Implementation Steps
Input Handling:
Prompt the user for a credit card number and ensure it's processed as a string.
Validation Function:
Implement a function to check the validity of the credit card number using the Luhn algorithm.
Card Type Detection:
Based on the starting digits and length of the credit card number, determine the card type.
Output the Result:
Print the result based on the validation and card type detection.
