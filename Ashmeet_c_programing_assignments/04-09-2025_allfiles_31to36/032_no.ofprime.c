#include<stdio.h>
void main()
{
    int a,b,c=0;
    printf("the prime numbers from 1 to 500 are:\n");
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
            printf("%d\n",a);
            c=c+1;
        }
    }
    printf("the total number of prime numbers are %d",c);
}

