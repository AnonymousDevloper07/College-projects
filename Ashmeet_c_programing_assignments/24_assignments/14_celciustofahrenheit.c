#include<stdio.h>
void main()
{
    float x;
    printf("enter the temperature value in celcius scale");
    scanf("%f",&x);
    float y=((9*x)/5)+32;
    printf("the value of temperature in fahrenheit scale is %f",y);
}
