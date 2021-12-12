//do while loop
//initialization
//increameation statement
//condition
#include<stdio.h>
int main()
{
	int sum,flag;
	do
	{
	int temp;
	printf("enter salary amount:");
	scanf("%d",&temp);
	sum=sum+temp;
	printf("do you want to continue?\n 0)yes \n 1)no \n choose opetion:");
	scanf("%d",&flag);
    }
    while(flag==0);
    printf("answer:%d",sum);
    return 0;
}
