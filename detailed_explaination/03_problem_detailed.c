// write a c programme to reverse a number.

#include <stdio.h>  // Include the standard input-output header file for using printf and scanf

int main() 
{
    int num, rev = 0, rem;  // Declare three integer variables:
                              // num - to store the user's input number
                              // rev - to store the reversed number (initialized to 0)
                              // rem - to store the remainder (last digit of num during the process)

    // Prompt the user to enter an integer
    printf("Enter an integer: ");  
    scanf("%d", &num);  // Read the integer input from the user and store it in the variable 'num'

    // Start a loop that runs until 'num' becomes 0 (meaning all digits have been processed)
    while (num != 0)  
    {
        rem = num % 10;  // Extract the last digit of 'num' using modulo operation (num % 10)
                         // This gives the remainder when 'num' is divided by 10, which is the last digit
        
        rev = rev * 10 + rem;  // Shift the current value of 'rev' to the left (multiply by 10)
                               // and add the last digit ('rem') to it, effectively building the reversed number

        num /= 10;  // Remove the last digit from 'num' using integer division by 10
                    // This discards the last digit, reducing the number by one digit (e.g., 123 becomes 12)
    }

    // Output the reversed number to the user
    printf("Reversed number: %d\n", rev);  // Print the final value of 'rev', which is the reversed number

    return 0;  // Return 0 to indicate successful completion of the program
}


