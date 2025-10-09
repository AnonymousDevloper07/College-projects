#include<stdio.h>
void main()
{
    int a[4][4];
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n \n");
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n \n");
    for(int i=0;i<4;i++)
    {
        for(int j=0+i;j<4;j++)
        {
            int t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
        printf("\n");
    }
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
