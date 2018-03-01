#include<stdio.h>
void main()
{
    char b;
    scanf("%c",&b);
    if(b>='a'&&b<='z'||b>='A'&&b<='Z')
    {
        printf("alphabet");
    }
    else
    {
        printf("not alphabet");
    }
}
