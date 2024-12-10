// write a c programme to find out largest numbers using 3 digits

#include <stdio.h>

int main()  
{
    int num1, num2, num3;  // Declare three variables to store the input numbers

    // Prompt the user to enter three 3-digit numbers
    printf("Enter three numbers (each with 3 digits): \n");

    // Input the first number from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);  // Read the first number and store it in num1

    // Input the second number from the user
    printf("Enter the second number: ");
    scanf("%d", &num2);  // Read the second number and store it in num2

    // Input the third number from the user
    printf("Enter the third number: ");
    scanf("%d", &num3);  // Read the third number and store it in num3

    // Compare the numbers and find the largest
    // If num1 is greater than or equal to both num2 and num3, print num1 as the largest
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is: %d\n", num1);  // num1 is the largest
    }
    // If num2 is greater than or equal to both num1 and num3, print num2 as the largest
    else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %d\n", num2);  // num2 is the largest
    }
    // If both the above conditions fail, then num3 must be the largest
    else {
        printf("The largest number is: %d\n", num3);  //
