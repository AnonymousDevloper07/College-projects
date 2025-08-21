#include<stdio.h>
void main()
{
    float x;
    printf("enter the gross sales\n");
    scanf("%f",&x);
    float y=x-(x/10);
    printf("the net sales is %f",y);
}
