#include <stdio.h>
void main()
{
int i,k;
int pos,neg,zero;
printf("enter 20 values:");

for (i=1; i<=20; i++)
{
scanf("%d",&k);

if (k<0){
neg=neg+1;
}

if (k>0){
pos=pos+1;
}

if (k==0){
zero=zero+1;
}

}
printf("Total no. of positive values are: %d\n",pos);
printf("Total no. of negative values are: %d\n",neg);
printf("Total no. of zero values are: %d\n",zero);
}
