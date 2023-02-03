#include<stdio.h>
int main()
{
	int n,i;
	printf("enter a number:");
	scanf("%d",&n);
	printf("even number till %d: ",n);
	for(i=2;i<=n;i=i+2)
	{
		printf("%d,",i);
	}
	return 0;
}
