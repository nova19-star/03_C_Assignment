// Write a c program to swap two numbers.

#include <stdio.h>  

int main()  
{
    int a, b;  // Declare two integer variables a and b
    
    printf("Enter the value of a: ");  // Display the user to enter the value for a
    scanf("%d", &a);  // Read the value of a from the user

    printf("Enter the value of b: ");  // Display the user to enter the value for b
    scanf("%d", &b);  // Read the value of b from the user

    // Perform the swapping of values using arithmetic operations
    a = a + b;  // a becomes the sum of a and b
    b = a - b;  // b becomes the original value of a
    a = a - b;  // a becomes the original value of b

    // Print the swapped values of a and b
    printf("After swapping, a = %d, b = %d\n", a, b);  // Display the swapped values

    return 0;
}
