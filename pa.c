#include<stdio.h>
void main()
{
    int a[50],k,i,c=0,n;
    printf("enter the n value");
    scanf("%d",&n);
    printf("enter the a value");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter the k value");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
    c=c+a[i];
    }
    printf("%d",c); 
}
