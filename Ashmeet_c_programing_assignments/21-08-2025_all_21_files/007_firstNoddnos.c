#include <stdio.h>
int main()
{
    int a,i;
    printf("enter a number: ");
    scanf("%d",&a);
    for(i=1; i<=a; i=i+2)
    {
        printf("%d\n", i);
    }
}
