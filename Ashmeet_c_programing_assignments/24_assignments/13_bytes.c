#include<stdio.h>
void main()
{
    float x;
    printf("enter the value in bytes");
    scanf("%f",&x);
    float kb=x/1024;
    float mb=kb/1024;
    float gb=mb/1024;
    printf("the value in\nKB=%f\nMB=%f\nGB=%f",kb,mb,gb);

}

