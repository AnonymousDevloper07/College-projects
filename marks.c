#include<stdio.h>

void main ()
{
    int x;
    int y;
    int z;
    int b;
    int a;
    printf("Give me the marks of 3 subjects.");
    scanf("%d%d%d",&x,&y,&z);
a=x+y+z;
printf("Your total marks are %d\n",a);
b=a/3;
printf("Your average marks are %d\n",b);

if(b>=70 && b<100) 
{
    printf("You have got a DISTINCTION");
}
else if(b>=60 && b<70)
{
    printf("You have gotten a FIRST CLASS");
}
else if(b>=50 && b<60)
{
    printf("You have gotten a SECOND CLASS");
}
else if(b>=33 && b<50)
{
    printf("You have gotten a THIRD CLASS");
}
else 
{
    printf("You have FAILED. GIT GUD");
}
}

