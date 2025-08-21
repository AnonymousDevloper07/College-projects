#include<stdio.h>

int main ()
{
int x;
int y;
int z;
printf("What are the gross sales ?");
scanf("%d",&x);
if(x>20000)
{
    y=15;
    z=x-x*y/100;
    printf("The discount is %d pecent.\nThe total sales are %d",y,z);
}
else if (x>10000 && x<20000)
{
    y=10;
    z=x-x*y/100;
    printf("The discount is %d percent.\nThe total sales are %d",y,z);
}
else if(x<10000)
{
    y=5;
    z=x-x*y/100;
    printf("The discount is %d percent.\nThe total sales are %d",y,z);

}
return(0);
}