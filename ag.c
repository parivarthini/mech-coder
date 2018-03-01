#include<stdio.h>
void main()
{
    int a,b,i=1,c,d=1;
    printf("enter the value a");
scanf("%d",&a);
 printf("enter the value b");
scanf("%d",&b);
while(i<b)
{
    c=(d+a)%i==0;
    i++;
}
printf("%d",c);
}
