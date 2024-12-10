// Write a c programme to swap two numbers using third value.

#include <stdio.h>  

int main()  
{
    int a, b, temp;  // Declare three integer variables: a, b, and temp (for swapping)
    
    printf("Enter the value of a: ");  // Prompt the user to enter the value for a
    scanf("%d", &a);  // Read the value of a from the user

    
    printf("Enter the value of b: ");  // Prompt the user to enter the value for b
    scanf("%d", &b);  // Read the value of b from the user

    // Swapping the values of a and b using a temporary variable temp
    temp = a;  // Store the value of a in temp
    a = b;  // Assign the value of b to a
    b = temp;  // Assign the value of temp (original a) to b

    // Print the swapped values of a and b
    printf("After swapping, a = %d, b = %d\n", a, b);  // Display the swapped values

    return 0; 
}
