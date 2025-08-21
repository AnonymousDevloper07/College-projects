#include<stdio.h>
void main()
{
    int x,y,z;
    printf("enter the value of x & y");
    scanf("%d%d",&x,&y);
    printf("Before swapping\n\nx=%d\ny=%d\n",x,y);
    z=x;
    x=y;
    y=z;
    printf("\nAfter swapping\n\nx=%d\ny=%d\n",x,y);
}
