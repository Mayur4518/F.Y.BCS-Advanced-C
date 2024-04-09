#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *n,d,s=0,temp;
	n=(int *)malloc(sizeof(int));
	printf("Enter number:");
	scanf("%d",n);
	temp=*n;
	while(*n>0)
	{
		d=*n%10;
		s=s+d*d*d;
		*n=*n/10;
	}
	 if(s==temp)
	  printf("Number is Armstrong");
	else
	  printf("Number is not Armstrong");
}
