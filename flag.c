#include<stdio.h>
void check(int n,int *flag1,int *flag2,int *flag3)
{
	int i;
	if(n%2==0)
	*flag1=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		break;
	}
	if(i==n)
	 *flag2=1;
	if(n%3==0||n%7==0)
	 *flag3=1;
}
int main()
{
	int n,flag1=0,flag2=0,flag3=0;
	printf("Enter number:");
	scanf("%d",&n);
	check(n,&flag1,&flag2,&flag3);
	if(flag1==1)
	  printf("Number is even");
	if(flag2==1)
	  printf("Number is prime");
	if(flag3==1)
	  printf("Number is Divisible by 3 or 7");
}
