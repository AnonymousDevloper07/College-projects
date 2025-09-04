#include <stdio.h>
void main()
{
int i,k;
int male,female;
printf("The sex code for boy is '1' and for girls is '2'\n");
printf("enter gender code of 20 students:");

for (i=1; i<=20; i++)
{
scanf("%d",&k);

if (k==1){
male=male+1;
}

if (k==2){
female=female+1;
}

}
printf("Total no. of boys are: %d\n",male);
printf("Total no. of girls are: %d\n",female);
}
