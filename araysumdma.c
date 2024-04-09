#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i,n,s=0;
	float avg;
	printf("Enter limit:");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	printf("Enter n  numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		s=s+*(p+i);
	}
	avg=(float)s/n;
	printf("\nSum=%d",s);
	printf("\nAverage=%f",avg);
}
