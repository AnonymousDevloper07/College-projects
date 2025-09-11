#include<stdio.h>
void main()
{
    int a,b=0,c=0,d,e;
    printf("enter a number");
    scanf("%d",&a);
    e=a;
    while(a!=0)
    {
        d=a;
        a=a/10;
        d=(d%10)*(d%10)*(d%10);
        b=b+1;
        c=c+d;

    }
    printf("the number is %d\nsum is %d",e,c);
    if(c==e)
    {
        printf("\narmstrong no.");
    }
    else
    {
        printf("\nnot armstrong no.");
    }
}

