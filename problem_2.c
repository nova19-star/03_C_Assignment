
    #include <stdio.h>

int main() {
    int a,b,temp;

    printf("Enter the value of a");
    scanf("%d",&a);

    printf("Enter the value of b");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf("Swaping value is, a=%d,b=%d",a,b);
    return 0;
}

