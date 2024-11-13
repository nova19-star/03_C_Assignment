//write a c program to check prime numbers.

#include <stdio.h>  

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {  // Numbers less than or equal to 1 are not prime
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {  // Check divisibility from 2 to sqrt(num)
        if (num % i == 0) {  // If num is divisible by any number, it's not prime
            return 0;
        }
    }
    return 1;  // Return 1 if num is prime
}

int main() {
    int num;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime and display the result
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}