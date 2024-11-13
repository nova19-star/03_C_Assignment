// write a c programme to reverse a number.

#include <stdio.h>  

int main() 
{
    int num, rev = 0, rem;  // Declare variables: num (input number), rev (reversed number), rem (remainder)

    // Input number from the user
    printf("Enter an integer: ");  // Display the user to enter an integer
    scanf("%d", &num);  // Read the integer from the user

    // Reverse the number
    while (num != 0)  // Loop until the number becomes 0
    {
        rem = num % 10;  // Get the last digit of the number (remainder when divided by 10)
        rev = rev * 10 + rem;  // Shift the current digits of rev and add the remainder
        num /= 10;  // Remove the last digit from the number (integer division by 10)
    }

    // Output the reversed number
    printf("Reversed number: %d\n", rev);  // Display the reversed number

    return 0;  
}



