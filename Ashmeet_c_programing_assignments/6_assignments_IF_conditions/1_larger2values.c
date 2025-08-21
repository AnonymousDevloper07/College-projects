#include<stdio.h>
#include<conio.h>

int main ()
{
int x ;
int y ;
int z ;
scanf("%d%d%d",&x,&y,&z);

if(x>y && x>z)
{
printf("%d is the greatest",x);

}
else if(y>x && y>z)
{
    printf("%d is the largest",y);
}
else
    printf("%d is the largest",z);
}


