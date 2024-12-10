//write a c program to check prime numbers.

#include <stdio.h>  

int main()  
{
    int num, i, isPrime = 1;  // Declare variables: num (number to check), i (loop counter), isPrime (flag to track primality)

    printf("Enter a number: ");  
    scanf("%d", &num);  // Input number from the user

    if (num <= 1) {  // If the number is less than or equal to 1, it's not prime
        isPrime = 0;  // Set isPrime flag to 0 (not prime)
    }

    for (i = 2; i * i <= num; i++) {  // Loop to check divisibility from 2 to sqrt(num)
        if (num % i == 0) {  // If num is divisible by i (i.e., num % i == 0)
            isPrime = 0;  // Set isPrime flag to 0 (not prime)
            break;  // Exit the loop early since we found a divisor
        }
    }

    if (isPrime) {  // If isPrime is still 1, the number is prime
        printf("%d is a prime number.\n", num);  // Output that the number is prime
    } else {  // Otherwise, the number is not prime
        printf("%d is not a prime number.\n", num);  // Output that the number is not prime
    }

    return 0;  // Return 0 to indicate successful completion
}
