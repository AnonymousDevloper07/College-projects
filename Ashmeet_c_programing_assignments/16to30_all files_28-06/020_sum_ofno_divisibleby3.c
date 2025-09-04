#include <stdio.h>
void main()
{
int i,sum=0;
printf("The sum of no. divisible by 3 is:\n");
for(i=3; i<=100; i=i+3){
sum=sum+i;}
printf("%d",sum);
}
