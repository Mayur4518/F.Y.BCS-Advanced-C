#include<stdio.h>
int main()
{
   int *a[100],n,i,s=0;
   printf("Enter limit:");
   scanf("%d",&n);
   printf("Enter n numbers:");
   for(i=0;i<n;i++)
   {
   	 scanf("%d",a+i);
   }
    for(i=0;i<n;i++)
    {
    	s=s+*(a+i);
	}
	printf("\n sum=%d",s);
}
