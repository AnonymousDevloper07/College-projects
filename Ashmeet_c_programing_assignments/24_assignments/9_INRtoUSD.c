#include<stdio.h>
void main ()
{
int x;
float y;
printf("Give me the INR amount");

scanf("%d",&x);
y=x/48.0;

printf("This is the amount of money in USD: %f",y);
}