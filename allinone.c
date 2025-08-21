#include<stdio.h>

void main()
{
int x;
float y;
int z;
int a;
int b;
float c;
printf("Give me two numbers and I will add, subtract, multiply and divide them.");
scanf("%d%f",&x,&y);
z=y+x;
a=y-x;
b=y*x;
c=y/x;

printf(" The sum of the number is %d\n The difference of the numbers is %d\n The product of the numbers is %d\n The ratio of the numbers is %f",z,a,b,c);
}