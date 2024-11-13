// write a c programme to find out is it a palindrome number or not.
#include <stdio.h>

int main() 
{
    int num, originalnum, rev = 0, rem;

    // Input number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number to compare later
    originalnum = num;

    // Reverse the number
    while (num != 0)
    {
        rem = num % 10;           // Get the last digit
        rev = rev * 10 + rem;     // Shift digits and add the remainder
        num /= 10;                // Remove the last digit from the number
    }

    // Output the reversed number
    printf("Reversed number: %d\n", rev);

    // Check if the original number is equal to the reversed number
    if (originalnum == rev) {
        printf("%d is a palindrome number.\n", originalnum);  // If both are the same, it's a palindrome
    } else {
        printf("%d is not a palindrome number.\n", originalnum);  // If not, it's not a palindrome
    }

    return 0;  // Return 0 indicating successful execution
}