#include <stdio.h>
void main(){
int a,b;
printf("Enter a number:\n");
scanf("%d",&a);
while(a!=0){
a=a/10;
b=b+1;
}
printf("the number of digits are: %d",b);
}
