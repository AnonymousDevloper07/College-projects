#include<stdio.h>
void main()
{
    float x;
    printf("enter the temperature value in fahrenheit scale");
    scanf("%f",&x);
    float y=(x-32)*5/9;
    printf("the value of temperature in celcius scale is %f",y);
}
