#include<stdio.h>
void main()
{
    int a,b=1;
    printf("enter a number");
    scanf("%d",&a);
    int c=a*a;
    printf("%d\n%d\n",a,c);
    while(a!=0)
    {
       if(a%10!=c%10)
       {
           b=0;
           break;
       }
       a=a/10;
       c=c/10;
    }
    if(b==1)
        printf("AUTOMORPIHC");
    else
        printf("NOT AUTOMORPHIHC");

}
