
#include <stdio.h>

int main() {
    int a,b=0,d=0;
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("the reverse is: ");

    int divisor = 1;
    int temp = num;
    while(a!=0)
    {
        d=a%10;
        b=(b*10)+d;
        a=a/10;
    }
    
    printf("%d",b);
    return 0;
}

