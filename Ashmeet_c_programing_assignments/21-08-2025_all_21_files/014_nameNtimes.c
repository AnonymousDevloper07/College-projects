#include <stdio.h>
int main()
{
    int i,sum=0;
    for(i=13; i<=100; i=i+13){
    sum=sum+i;
    }
    printf("the sum of nos. divisible ny 13 is: %d\n", sum);
}
