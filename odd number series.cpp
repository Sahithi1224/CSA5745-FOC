#include<stdio.h>
int main()
{
	int n,i;
	printf("enter a number:");
	scanf("%d",&n);
	printf("odd number till %d: ",n);
	for(i=1;i<=n;i=i+2)
	{
		printf("%d,",i);
	}
	return 0;
}
