#include<stdio.h>
int main()
{
	int n,*p;
	printf("Enter number:");
	scanf("%d",&n);
	p=&n;
	if(*p%2==0)
	  printf("No is even");
	else
	   printf("No is odd");
}
