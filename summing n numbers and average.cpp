#include<stdio.h>
int main()
{
	int n,count=1;
	float x,average,sum=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	while(count<=n)
	{
		printf("enter the %d number:",count);
		scanf("%f",&x);
		sum+=x;
		++count;
	}
	average=sum/n;
	printf("\nthe average is  %f\n",average);
}
