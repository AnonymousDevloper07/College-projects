#include<stdio.h>
void main()
{
    int a[5],b;
    printf("enter 5 numbers:\n");
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<5/2;i++)
    {
        b=a[4-i];
        a[4-i]=a[i];
        a[i]=b;
    }
    printf("\n");
     for(int i=0;i<5;i++)
        printf("%d\n",a[i]);
}
