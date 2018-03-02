include<stdio.h>
void main()
{
    int a,b,c,i;
    printf("enter the value a");
scanf("%d",&a);
 printf("enter the value b");
scanf("%d",&b);
for(i=a;i<b;i++)
{
c=i%2;

if(c==0)
{
printf("\n%d",i);
}
}
}
