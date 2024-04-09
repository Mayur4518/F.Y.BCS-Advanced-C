#include<stdio.h>
 struct book
 {
 	char bname[20],aname[20];
 	int price;
 }b1[100];
 int main()
 {
 	int i,n;
 	void disp(struct book b1[100],int n);
 	printf("Enter limit:");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		printf("Enter bname aname and price:");
 		scanf("%s%s%d",&b1[i].bname,&b1[i].aname,&b1[i].price);
	 }
	 disp(b1,n);
 }
 void disp(struct book b1[100],int n)
 {
 	int i;
 	printf("\n Book Name  Auther Name  Price");
 	printf("\n.................................");
 	for(i=0;i<n;i++)
 	{
 		if(b1[i].price>=500)
 		{
 			printf("\n%s\t\t%s\t\t%d",b1[i].bname,b1[i].aname,b1[i].price);
		 }
	 }
 }
