#include<stdio.h>
void main()
{
    float x;
    printf("enter the gross salary");
    scanf("%f",&x);
    float y=x+(x/10)-(3*x/100);
    printf("the net salary is %f",y);
}
