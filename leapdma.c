#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *y;
	y=(int *)malloc(sizeof(int));
	printf("Enter year:");
	scanf("%d",y);
	if(*y%4==0)
	  printf("Leap year");
	else
	  printf("Not leap year");
	free(y);
}
