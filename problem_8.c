// write a c programme to find out Fibonacci series

#include <stdio.h>

int main()  
{
    int n, first = 0, second = 1, next, i;  

    printf("Enter the number of terms: ");  
    scanf("%d", &n);  

    if (n <= 0) {
        printf("Please enter a positive integer.\n");  
    } else {
        printf("Fibonacci Series: ");
        
        for (i = 1; i <= n; i++) {  
            if (i == 1) {
                printf("%d ", first);  
                continue;
            } else if (i == 2) {
                printf("%d ", second);  
                continue;
            }
            next = first + second;  
            first = second;  
            second = next;  
            printf("%d ", next);  
        }
        printf("\n");  
    }

    return 0;  
}
