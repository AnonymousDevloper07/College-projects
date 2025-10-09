#include<stdio.h>
void main()
{
    int a[9]={500,200,100,50,20,10,5,2,1};
    int c[9];
    int b;
    printf("enter the amount");
    scanf("%d",&b);
    for(int i=0;i<9;i++)
    {
        if(b/a[i]>=0)
        {
            c[i]=b/a[i];
            b=b-(a[i]*(b/a[i]));

        }
    } printf("the list of no of notes required are:\nMoney -- No. of Notes\n");
    for(int i=0;i<9;i++)
    {
        if(c[i]!=0)

        printf("%d   -- %d\n",a[i],c[i]);
    }
}
