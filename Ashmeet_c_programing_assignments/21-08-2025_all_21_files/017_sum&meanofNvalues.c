#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, value, mean;
    printf("Enter the number of values: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%f", &value);
        sum += value;
    }
    mean = sum / n;
    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);

    return 0;
}
