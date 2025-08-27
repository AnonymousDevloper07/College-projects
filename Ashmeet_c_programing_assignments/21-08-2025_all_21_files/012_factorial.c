#include <stdio.h>
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);

    int i,mul=1;
    for(i=1; i<=a; i++){
    mul=mul*i;
    }
    printf("%d\n", mul);
}
