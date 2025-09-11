#include<stdio.h>
void main()
{
    int a,b=0,c,d;

    printf("enter a number");
    scanf("%d",&a);
    c=a;
    printf("reverse is\n");
    while(a!=0)
    {
        d=a%10;
        b=(b*10)+d;
        a=a/10;
    }
    printf("%d\n",b);
    if(c==b)
    {
        printf("this is a pallindrome");
    }
    else
        printf("not a pallindrome");

}

