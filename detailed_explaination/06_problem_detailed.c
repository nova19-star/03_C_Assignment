// write a c programme to find factorial numbers

#include <stdio.h>

int main()  
{
    int num, factorial = 1;  // Declare variables: num (user input) and factorial (to store the result)

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);  // Get the number for which we need to calculate the factorial

    // Calculate the factorial using a for loop
    for (int i = 1; i <= num; i++) {
        factorial *= i;  // Multiply factorial by the current number i
    }

    // Output the factorial
    printf("Factorial of %d is: %d\n", num, factorial);  // Display the result

    return 0;  // Return 0 to indicate successful execution
}
