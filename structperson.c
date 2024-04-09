#include<stdio.h>
  struct person
  {
  	char name[20],add[20];
  	struct birthdate
  	{
  		int dd,mm,yyyy;
	  }b1;
  }p1[100];
  int main()
  {
  	int i,n;
  	printf("Enter limit:");
  	scanf("%d",&n);
  	for(i=0;i<n;i++)
   { 
     	printf("Enter name and address:");
      	scanf("%s%s",&p1[i].name,&p1[i].add);
    	printf("Enter birthdate dd-mm-yyyy");
    	scanf("%d%d%d",&p1[i].b1.dd,&p1[i].b1.mm,&p1[i].b1.yyyy);
   }
    printf("\n Name  Address Birthdate");
    printf("\n.........................");
    for(i=0;i<n;i++)
    	{
  	      printf("\n%s\t%s\t%d-%d-%d",p1[i].name,p1[i].add,p1[i].b1.dd,p1[i].b1.mm,p1[i].b1.yyyy);
		}
  	
  }
