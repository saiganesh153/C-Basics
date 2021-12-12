// for loop in c langahe
// student 4 subject
// 4 subjects input
// 4 sum . avg 
#include<stdio.h>
int main()
{
	int i;
	float sum,avg;
	for(i=1;i<=4;i++)
	{
		float temp;
		printf("enter sem %d marks:\n",i);
		scanf("%f",&temp);
		sum=sum+temp;
	}
    avg=sum/4;
    printf("average:%f",avg);
    
}

