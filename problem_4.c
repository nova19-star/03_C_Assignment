//write a c programme to calculate simple interest.

#include <stdio.h>  

int main()  
{
    int p, r, t, si;  

    printf("Enter the Principal Amount: ");  
    scanf("%d", &p);  

    printf("Enter the Rate of Interest: ");  
    scanf("%d", &r);  

    printf("Enter the Time (in years): ");  
    scanf("%d", &t);  

    si = (p * r * t) / 100;  

    printf("Simple Interest (SI) = %d\n", si);  

    return 0;  
}
