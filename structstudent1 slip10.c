#include<stdio.h>
 struct stud
 {
 	int rno;
 	char name[20];
 	float per;
 }s1[5];
 int main()
 {
 	int i;
 	for(i=0;i<5;i++)
 	{
	 
 	  printf("Enter rno name percentage:");
 	  scanf("%d%s%f",&s1[i].rno,&s1[i].name,&s1[i].per);
    }
    printf("\n Rno  Name  Percentage");
    printf("\n...........................");
    for(i=0;i<5;i++)
    {
    	printf("\n%d\t%s\t%f",s1[i].rno,s1[i].name,s1[i].per);
	}
}
 
