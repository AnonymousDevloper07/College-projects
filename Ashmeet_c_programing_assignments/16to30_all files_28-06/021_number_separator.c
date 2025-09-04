
#include <stdio.h>

int main() {
    int num, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits: ");

    int divisor = 1;
    int temp = num;
    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }

    while (divisor > 0) {
        digit = num / divisor;
        printf("%d", digit);
        num %= divisor;
        divisor /= 10;

        if (divisor > 0) {
            printf(",");
        }
    }

    printf("\n");
    return 0;
}
