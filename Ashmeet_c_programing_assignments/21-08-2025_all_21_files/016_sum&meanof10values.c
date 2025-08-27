#include <stdio.h>
int main()
{
    int i,sum=0;
    float mean;
    for(i=1; i<=10; i=i+1){
    sum=sum+i;
    }
    printf("%d\n", sum);
    mean=sum/10.0;
    printf("the mean is %.2f\n", mean);
}
