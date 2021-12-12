#include<stdio.h>
int main()
 {
	int i=0,sum=0;
	printf("enter the salarys:\n");
	while(i < 5)
	{
	  float temp;
	  scanf("%f",&temp);
	  sum=i+temp;
	  printf("sum:%d\n",sum);
	  i++;
	}
	float avg;
	avg=(sum/5);
	printf("average:%f",avg);
	return 0;
 }


