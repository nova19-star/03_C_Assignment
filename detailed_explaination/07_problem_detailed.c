// write a c programme to print day of a week using switch case

#include <stdio.h>

int main()  
{
    int day;  // Declare variable to store user input for the day number

    // Ask the user to input a number between 1 and 7
    printf("Enter a number (1-7) to get the day of the week: ");  
    scanf("%d", &day);  // Read the input number

    // Switch case to check the value of day and print the corresponding day of the week
    switch(day) {  
        case 1:  
            printf("Monday\n");  // If day is 1, print Monday
            break;  // Exit the switch statement
        case 2:  
            printf("Tuesday\n");  // If day is 2, print Tuesday
            break;  // Exit the switch statement
        case 3:  
            printf("Wednesday\n");  // If day is 3, print Wednesday
            break;  // Exit the switch statement
        case 4:  
            printf("Thursday\n");  // If day is 4, print Thursday
            break;  // Exit the switch statement
        case 5:  
            printf("Friday\n");  // If day is 5, print Friday
            break;  // Exit the switch statement
        case 6:  
            printf("Saturday\n");  // If day is 6, print Saturday
            break;  // Exit the switch statement
        case 7:  
            printf("Sunday\n");  // If day is 7, print Sunday
            break;  // Exit the switch statement
        default:  
            printf("Invalid input! Please enter a number between 1 and 7.\n");  // If input is not between 1 and 7, print error
    }

    return 0;  // Return 0 to indicate successful execution
}
