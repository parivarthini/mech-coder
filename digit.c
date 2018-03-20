#include<stdio.h>
void main()
{
    long int n;
    int count=0;
    printf("enter the n value");
    scanf("%ld",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("%d",count);
}
