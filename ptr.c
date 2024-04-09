#include<stdio.h >
void main()
{
	int a=20;
	int *ptr;
	ptr=&a;
	printf("value of a=%d\n",a);
	printf("value of a=%d\n",*ptr);
}
