#include<stdio.h>
#include<math.h>

int main ()
{
int x ;
int y ;
int z ;
int b ;
printf("What is your salary?");
scanf("%d",&x);

if(x>=10000)
{ y=10;
  b=3;
printf("your allowance is %d percent and your deduction is %d percent \n",y,b);
z=x+x*y/100-x*b/100 ;
printf("Your net salary is %d\n",z);

}
else if (x>=5000 && x<10000)
{
    y=5;
    b=2;
printf("your allowance is %d percent and your deduction is %d percent \n",y,b);
z=x+x*y/100-x*b/100;
printf("Your net salary is %d",z);
}
else
{
printf("Your salary is too low to calculate allowences and deductions.");
}
}

