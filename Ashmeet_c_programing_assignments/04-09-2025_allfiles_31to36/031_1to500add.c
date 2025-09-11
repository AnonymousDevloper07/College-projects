#include<stdio.h>
void main()
{
    int a,b,c=0;
    printf("the sum prime numbers from 1 to 500 are:\n");
    for(a=2;a<=500;a++)
    {
        b=0;
        for(int i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                b=1;
                break;
            }
        }
        if(b==0)
        {
            c=c+a;
            printf("%d\n",a);
        }
    }
    printf("the sum is %d",c);
}
