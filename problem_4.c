//write a c programme to calculate simple interest.

#include <stdio.h>

int main() {
    int p,r,t,si;
    printf("Enter the Principle Ammount");
    scanf("%d",&p);
    printf("Enter the Rate");
    scanf("%d",&r);
    printf("Enter the Time");
    scanf("%d",&t);

    si=(p * r * t)/100;
    printf("si = %d",si);
    return 0;
}

