#include <stdio.h>

int main() {
    int m1, m2, m3, total;
    float avg;

    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    if (m1 < 35 || m2 < 35 || m3 < 35) {
        printf("Result: Fail (because marks < 35 in at least one subject)\n");
        return 0; 
    }

    total = m1 + m2 + m3;
    avg = total / 3.0;

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", avg);

    if (avg >= 70)
        printf("Result: Distinction\n");
    else if (avg >= 50)
        printf("Result: Second Class\n");
    else if (avg > 35)
        printf("Result: Third Class\n");
    else
        printf("Result: Fail\n");

    return 0;
}