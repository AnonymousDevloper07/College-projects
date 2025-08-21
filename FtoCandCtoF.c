#include<stdio.h>
void main ()
{
int x;
int y;
float z;
printf("Press 1 to convert to Fahrenheit\nPress 2 to convert to Celcius");
scanf("%d",&x);
if (x==1)
{printf("Give me the Celcius measurement.");
    scanf("%d",&y);
    z=(9.0/5)*y+32;
 printf("This is the temperature in Fahrenheit: %0.2f",z);
}    
else if(x==2)
{
    printf("Give me the Fahrenheit measurement.");
    scanf("%d",&y);
    z=(5/9.0)*y-32;
    printf("This is the temperature in Celcius: %0.2f",z);
}
}