#include<stdio.h>
int main()
{
	int n,r,sum=0,temp;
	printf("enter number:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum+=r*r*r;
		n=n/10;
	}
	if(sum==temp)
      {

		printf("%d is Armstrong ",sum);
	  }
   	else
	  {
		printf("%d is not Armstrong ",sum);
	  }
	return 0;
}
