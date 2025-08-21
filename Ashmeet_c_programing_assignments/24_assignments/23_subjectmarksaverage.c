#include<stdio.h>
void main()
{
    float x;
    float y;
    float z;
    printf("enter the marks of three subjects out of 100\n");
    scanf("%f%f%f",&x,&y,&z);
    float a=x+y+z;
    float b=a/3;
    printf("the total marks is %f\nthe average marks is %f",a,b);
}
