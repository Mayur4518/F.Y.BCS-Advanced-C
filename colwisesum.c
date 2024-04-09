#include<stdio.h>
int main()
{
	int a[10][10],m,n,i,j,s;
	printf("Enter number of rows and cols:");
	scanf("%d%d",&m,&n);
	printf("Enter matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Sum:\n");
	for(i=0;i<m;i++)
	{
		s=0;
		for(j=0;j<n;j++)
			{
				s=s+a[i][j];
			}
			printf("%d\t",s);
	}
}
