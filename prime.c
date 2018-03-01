#include<stdio.h>
void main()
{
    int n,i=1,a;
    printf("enter the value");
    scanf("%d",&n);
    while(i<n)
    {
        a=n%i;
        i++;
    }
    if(a!=0)
    {
        printf("prime number");
    }
    else
    
    {
        printf("not prime number");
    }    
}
