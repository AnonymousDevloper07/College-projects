#include<stdio.h>
void main()
{
    int a[10],b[10];
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<10;i++)
        b[i]=0;
    for(int i=0;i<10;i++)
    {
        int x=1;
        if(b[i]==1)
        {
            continue;
        }
        for(int j=i+1;j<10;j++)
        {
            if(a[i]==a[j])
            {
                b[j]=1;
                x=x+1;
            }
        }
        printf("%d:%d\n",a[i],x);
    }
}

