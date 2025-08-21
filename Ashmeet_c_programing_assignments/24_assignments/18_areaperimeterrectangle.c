#include<stdio.h>
void main()
{
    int x;
    int a;
    printf("enter the value of sides of rectangle\n");
    scanf("%d%d",&x,&a);
    int y=x*a;
    int z=2*(x+a);
    printf("the value area is %d\nthe perimeter is %d",y,z);
}
