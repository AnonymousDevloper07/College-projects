#include<stdio.h>
void main()
{
    float p;
    float n;
    float r;
    printf("enter the principal amount P\nenter the number oy years N\nenter the rate of interest per annum R\n ");
    scanf("%f%f%f",&p,&n,&r);
    float i=(p*n*r)/100;
    printf("the simple interest is %f",i);
}
