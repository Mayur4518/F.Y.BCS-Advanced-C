#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,n;
	printf("Enter limit:");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	printf("Enter n numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("\nAlternate array:");
	for(i=0;i<n;i=i+2)
	{ 
	    
		printf("%d\t",*(p+i));
	}
}
