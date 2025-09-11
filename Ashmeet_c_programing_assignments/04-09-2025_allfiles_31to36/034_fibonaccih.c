#include<stdio.h>
void main()
{
    int n,first=0,sec=1,a;
    printf("enter the terms no. of terms");
    scanf("%d",&n);
    if(n==1)
        printf("%d",first);
    else
    {
        printf("%d,%d",first,sec);
    }
    for(int i=2;i<n;i++)
    {
        a=first+sec;
        printf(",%d",a);
        first=sec;
        sec=a;
    }

}
