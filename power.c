#include<stdio.h>
void main()
{
    int i,b,e,p=1;
    printf("enter the base value");
    scanf("%d",&b);
    printf("enter the exponent value");
    scanf("%d",&e);
    for(i=1;i<=e;i++)
    {
        p=p*b;
    }
    printf("%d",p);
    
}
