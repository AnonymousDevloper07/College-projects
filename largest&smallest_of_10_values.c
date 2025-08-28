#include <stdio.h>
int main()
{
int i,j,k,smallest,largest;
printf("enter 10 values:");
scanf("%d",j);
largest=j;
smallest=j;
for (i=1; i<=9; i++)
{
scanf("%d",k);
if (k>largest)
{
largest=k;
}
if (k<smallest)
{
smallest=k;
}
}
printf("largest is:%d\nsmallest is:%d\n",largest,smallest);
return 0;
}

