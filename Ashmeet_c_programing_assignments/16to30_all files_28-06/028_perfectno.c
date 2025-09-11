#include<stdio.h>
void main()
{
    int a,b=0,c=0;
    printf("enter a positive number");
    scanf("%d",&a);
    for(int i=1;i<=a/2;i++)
    {
        if(a%i==0)
        {
            b=1;
        }
        if(b==1)
        {
           c=c+i;
        }
        b=0;
    }
    printf("the no. is %d\nthe sum of half factors is %d\n",a,c);
    if(c==a)
        printf("perfect no.");
    else
        printf("not a perfect no.");
}
