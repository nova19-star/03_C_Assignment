// write a c programme to find out Fibonacci series

#include <stdio.h>

int main()  
{
    int n, first = 0, second = 1, next, i;  // Declare variables for the number of terms and Fibonacci sequence

    printf("Enter the number of terms: ");  
    scanf("%d", &n);  // Input the number of terms for the Fibonacci series

    // Check if the number of terms is valid
    if (n <= 0) {
        printf("Please enter a positive integer.\n");  // Handle invalid input for n
    } else {
        printf("Fibonacci Series: ");
        
        // Loop to generate and print the Fibonacci sequence
        for (i = 1; i <= n; i++) {  
            if (i == 1) {
                printf("%d ", first);  // Print the first term (0)
                continue;
            } else if (i == 2) {
                printf("%d ", second);  // Print the second term (1)
                continue;
            }
            next = first + second;  // Calculate the next term by adding the previous two terms
            first = second;  // Update first to the previous second
            second = next;  // Update second to the next term
            printf("%d ", next);  // P
