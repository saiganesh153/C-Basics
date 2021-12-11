#include<stdio.h>
int main()
{
	int age;
	printf("\nenter a number:");
	scanf("%d",&age);
	if(age>=20)
	{
		printf("eligible\n");
	   char gender;
	   printf("enter your gender(M/F):");
	   scanf(" %c",&gender);
	   if(gender=='M')
	   {
		printf("male ticket issued");
	   }
	   else
	   {
	   	printf("femail ticket issued");
	   }
    }
    else
	{
		printf("ineligible");
	}
	
}
