
#include <stdio.h>

int main() {
    int num, digit;
    int a,b,c;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits: ");

    int divisor = 1;
    int temp = num;
    while (temp >= 10) {
        temp=temp/10;
        divisor=divisor*10;
    }
    
    
    digit = num / divisor;
    num=num%divisor;
    divisor=divisor/10;   
    a=digit;
    a = num / divisor;
    num=num%divisor;
    divisor=divisor/10;
    b=a;
    b= num / divisor;
    num=num%divisor;
    divisor=divisor/10;
    c=b;
    printf("%d%d%d",c,b,a);
    return 0;
}
