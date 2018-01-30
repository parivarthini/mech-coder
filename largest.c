#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b&&c>a)
{
printf("largest value is%d",a);
}
else if(b>c&&c>a)
{
printf("largest value is %d',b);
}
else
{
printf("largest value is %d",c);
}}
