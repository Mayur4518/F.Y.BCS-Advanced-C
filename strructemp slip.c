#include<stdio.h>
  struct emp
  {
  	int id;
  	char name[20];
  	long int sal;
  }e1[100];
 int main()
 {
 	int i,n,ch;
 	printf("Enter limit:");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		printf("Enter id name salary:");
 		scanf("%d%s%ld",&e1[i].id,&e1[i].name,&e1[i].sal);
	 }
	do
	{
		printf("\n1-display all \n2-disp sal>25000");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:for(i=0;i<n;i++)
			       {
			       	 printf("\nID=%d",e1[i].id);
			       	 printf("\nName=%s",e1[i].name);
			       	 printf("\nSalary=%ld",e1[i].sal);
				   }
				   break;
			case 2:for(i=0;i<n;i++)
			       {
			        if(e1[i].sal>25000)
			       {
			         printf("\nID=%d",e1[i].id);
			       	 printf("\nName=%s",e1[i].name);
			       	 printf("\nSalary=%ld",e1[i].sal);
			       }
			      }
			       break;
			default:printf("Invalid choice");
		}
	}while(ch<3);
 }
