
#include <stdio.h>

int main() {
    int num, digit, sum=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The sum of digits is: ");

    int divisor = 1;
    int temp = num;
    while (temp >= 10) {
        temp=temp/10;
        divisor=divisor*10;
    }

    while (divisor > 0) {
        digit = num / divisor;
        num=num%divisor;
        divisor=divisor/10;
        sum=sum+digit;   
    }

    printf("%d",sum);
    return 0;
}
