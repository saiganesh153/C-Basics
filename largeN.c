#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter a number:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
	{
	printf("%d is the bigger",a);
	}
	else if(b>a && b>c && b>d)
	{
		printf("%d is the bigger",b);
	}
	else if(c>a && c>b && c>d)
	{
		printf("%d is the bigger",c);
	}
		else 
	{
		printf("%d is the bigger",d);
	}
}

