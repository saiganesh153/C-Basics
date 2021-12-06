#include<stdio.h>
void main()
{
int a;
scanf("%d",&a);
if(a%3==0 && a%7==0 && a%9==0)
{
printf("%d is divisible by 3&7&9",a);
}
else
{
printf("%d is not divisible by 3&7&9",a);
}
}
