//write a c programme to calculate simple interest.

#include <stdio.h>  

int main()  
{
    int p, r, t, si;  // Declare integer variables for principal (p), rate of interest (r), time (t), and simple interest (si)

    // Input the principal amount
    printf("Enter the Principal Amount: ");  // Prompt the user to enter the principal amount
    scanf("%d", &p);  // Read the principal amount entered by the user and store it in 'p'

    // Input the rate of interest
    printf("Enter the Rate of Interest: ");  // Prompt the user to enter the rate of interest
    scanf("%d", &r);  // Read the rate of interest entered by the user and store it in 'r'

    // Input the time period (in years)
    printf("Enter the Time (in years): ");  // Prompt the user to enter the time period in years
    scanf("%d", &t);  // Read the time period entered by the user and store it in 't'

    // Calculate the simple interest using the formula: SI = (P * R * T) / 100
    si = (p * r * t) / 100;  // Calculate the simple interest using the formula and store the result in 'si'

    // Output the calculated simple interest
    printf("Simple Interest (SI) = %d\n", si);  // Print the calculated simple interest

    return 0;  // Return 0 indicating successful execution of the program
}
