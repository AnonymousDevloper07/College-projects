#include<stdio.h>

void main()
{
float x;
float y;
float z;
float a;
float b;
float c;
printf("Give me two numbers and I will add, subtract, multiply and divide them.");
scanf("%f%f",&x,&y);
z=y+x;
a=y-x;
b=y*x;
c=y/x;

printf("The sum of the number is: %.2f\n", z);
printf("The difference of the numbers is: %.2f\n", a);
printf("The product of the numbers is: %.2f\n", b);
printf("The division of the numbers is: %.2f\n", c);
}
