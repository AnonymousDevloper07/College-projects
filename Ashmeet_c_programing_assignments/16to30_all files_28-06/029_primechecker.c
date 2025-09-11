#include<stdio.h>
void main()
{
    int a,b=0;
    printf("enter a positive number to check");
    scanf("%d",&a);
    if(a>1)
    {

    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            b=1;
            break;
        }
    }
    if(b==1)
    {
        printf("%d is NOT PRIME",a);
    }
    else if(b==0)
    {
        printf("%d is PRIME",a);
    }
    }
    else
    {
        printf("%d is NOT PRIME",a);
    }


}
