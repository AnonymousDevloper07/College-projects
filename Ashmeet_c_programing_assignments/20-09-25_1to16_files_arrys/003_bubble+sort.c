#include<stdio.h>
void main()
{
    int a[5];
    for(int i=0;i<=4;i++)
        scanf("%d",&a[i]);
    for(int j=0;j<4;j++)
    {
        for(int i=0;i<4-j;i++)
    {
        if(a[i]>a[i+1])
        {
            int b=a[i+1];
            a[i+1]=a[i];
            a[i]=b;
        }
    }
    }
    for(int i=0;i<=4;i++)
    {
        printf("%d\t",a[i]);
    }
}
