//write a c programme to calculate simple interest.

#include <stdio.h>  

int main()  
{
    int p, r, t, si;  // Declare variables: p (principal), r (rate), t (time), si (simple interest)

    // Input the principal amount
    printf("Enter the Principal Amount: ");  // Display the user to enter Principle Ammount         
    scanf("%d", &p);  // Read the principal amount from the user

    // Input the rate of interest
    printf("Enter the Rate of Interest: ");  // Display the user to enter Rate of Intrest
    scanf("%d", &r);  // Read the rate of interest from the user

    // Input the time period (in years)
    printf("Enter the Time (in years): ");  // Display the user to enter the Time period 
    scanf("%d", &t);  // Read the Time period from the user

    // Calculate the simple interest using the formula: SI = (P * R * T) / 100
    si = (p * r * t) / 100;

    // Output the calculated simple interest
    printf("Simple Interest (SI) = %d\n", si);  // Display the result

    return 0;  // Return 0 indicating successful execution
}
