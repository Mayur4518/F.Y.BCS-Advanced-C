#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *n;
	n=(int*)malloc(sizeof(int));
	printf("Enter number");
	scanf("%d",n);
	if(*n%2==0)
	printf("Number is even");
	else
	printf("Number is odd");
	free(n);
}

