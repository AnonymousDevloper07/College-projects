#include<stdio.h>
void main()
{
    int a[5],b[10];
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);
    for (int i=0;i<10;i++)
        scanf("%d",&b[i]);

    for(int i=0;i<5;i++)
    {
        b[2*i]=a[i];
    }
    printf("\n");
    for(int i=0;i<10;i++)
        printf("%d\n",b[i]);
}
