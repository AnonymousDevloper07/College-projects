#include<stdio.h>
void main ()
{
int x;
int y;
float z;
printf("Press 1 to convert to Kilogram\nPress 2 to convert to Gram");
scanf("%d",&x);
if (x==1)
{printf("Give me the Gram measurement.");
    scanf("%d",&y);
    z=y/1000.0;
 printf("This is the mass in Kilogram: %0.2f",z);
}    
else if(x==2)
{
    printf("Give me the Kilogram measurement.");
    scanf("%d",&y);
    z=y*1000.0;
    printf("This is the weight in Gram: %0.2f",z);
}
}