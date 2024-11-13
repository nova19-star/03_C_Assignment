//write a c programme to find out palindrome numbers.

#include <stdio.h>

int main() {
    int num, rev = 0, rem;

    // Input number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0)
    {
    rem = num % 10;            // Get the last digit
        rev = rev * 10 + rem;  // Shift digits and add the remainder
        num /= 10;                       // Remove the last digit from the number
    }

    // Output the reversed number
    printf("Reversed number: %d\n", rev);

    return 0;
}

