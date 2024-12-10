// write a c programme to find out is it a palindrome number or not

#include <stdio.h>

int main() 
{
    int num, originalnum, rev = 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalnum = num;

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    printf("Reversed number: %d\n", rev);

    if (originalnum == rev) {  
        printf("%d is a palindrome number.\n", originalnum);
    } else {
        printf("%d is not a palindrome number.\n", originalnum);
    }

    return 0;
}
