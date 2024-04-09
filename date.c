#include<stdio.h>
void add_days(int *dd,int *mm,int *yy,int days)
{
	*dd=*dd+days;
	if((*mm==4||*mm==6||*mm==9||*mm==11)&&*dd>30)
	{
		*dd=*dd-30;
		*mm=*mm+1;
	}
	else if((*mm==1||*mm==3||*mm==5||*mm==7||*mm==8||*mm==10||*mm==12)&&*dd>31)
	{
		*dd=*dd-31;
		*mm=*mm+1;
	}
	else if(*mm==2&&*dd>28)
	{
		*dd=*dd-28;
		*mm=*mm+1;
	}
	if(*mm>12)
	{
		*yy=*yy+1;
	}
}
int main()
{
	int dd,mm,yy,days;
	printf("Enter date in dd:");
	scanf("%d",&dd);
	printf("Enter date in mm:");
	scanf("%d",&mm);
	printf("Enter date in yy:");
	scanf("%d",&yy);
	printf("Enter number of days to add:");
	scanf("%d",&days);
	add_days(&dd,&mm,&yy,days);
	printf("\n New date=%d-%d-%d",dd,mm,yy);
}
