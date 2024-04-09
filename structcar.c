#include<stdio.h>
	struct car
	{
		int cno;
		char model[20],color[20];
		int cost;
	}c1[100];
int main()
{
	int i,n,ch;
	char model[20];
	void search(struct car c1[100],int n,char model[20]);
	void disp(struct car c1,int n);
	printf("Enter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter cno model color cost:");
		scanf("%d%s%s%d",&c1[i].cno,&c1[i].model,&c1[i].color,&c1[i].cost);
	}
	do
	{
		printf("\n1-Search by model name\n 2-display all");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter model name:");
			       scanf("%c",&model);
			       search(c1,model,n);
			       break;
			case 2:disp(c1,n);
			       break;
			default:printf("Invalid choice");
		}
	}while(ch<3)
}
void search(struct car c1[100],char model[20],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(strcmp(c1[i].name,model)==0)
		{
			printf("\n Car no=%d",c1[i].cno);
			printf("\n Model=%s",c1[i].model);
			printf("\n Color=%s",c1[i].color);
			printf("\n Cost=%d",c1[i].cost);
		}
	}
}
void disp(struct car c1[100],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n Car no=%d",c1[i].cno);
		printf("\n Model=%s",c1[i].model);
		printf("\n Color=%s",c1[i].color);
		printf("\n Cost=%d",c1[i].cost);
	}
}
