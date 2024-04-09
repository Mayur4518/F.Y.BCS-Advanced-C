#include<stdio.h>
#include<stdlib.h>
int main()
{
	int*p,n,i;
	printf("Enter limit:");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	printf("Enter n numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("\nReverse aaray:");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",*(p+i));
	}
}
