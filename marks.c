#include<stdio.h>
void main()
{
	int marks;
	printf("Enter the marks:");
	scanf("%d",&marks);
	if(marks>=80)
	{
	printf("grade is A");
	}
	else if(70<=marks && marks<80)
	{
		printf("grade is B");
	}
	else if(60<=marks && marks<70)
	{
		printf("grade is C");
	}
    else if(marks>=50 && marks<60)
	{
		printf("grade is D");
	}
	else
	{
		printf("fail");
	}
}

