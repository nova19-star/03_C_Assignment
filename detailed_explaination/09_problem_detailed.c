// write a c programme to find out is it a palindrome number or not

#include <stdio.h>

int main() 
{
    int num, originalnum, rev = 0, rem;

    // Input number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);  // Read the input number into 'num'

    // Store the original number to compare later
    originalnum = num;  // 'originalnum' stores the original value of the input number

    // Reverse the number
    while (num != 0)  // Loop until the number becomes zero
    {
        rem = num % 10;  // Get the last digit of the number (remainder of num divided by 10)
        rev = rev * 10 + rem;  // Shift the digits of 'rev' to the left and add the last digit
        num /= 10;  // Remove the last digit from 'num' by integer division by 10
    }

    // Output the reversed number
    printf("Reversed number: %d\n", rev);  // Print the reversed number to the console

    // Check if the original number is equal to the reversed number
    if (originalnum == rev) {  
        printf("%d is a palindrome number.\n", originalnum);  // If both are the same, it's a palindrome
    } else {
        printf("%d is not a palindrome number.\n", originalnum);  // Otherwise, it's not a palindrome
    }

    return 0;  // Return 0 to indicate successful execution
}
