#include<stdio.h>
  struct student
  {
  	int rno;
  	char name[20];
  }s1;
int main()
 {
  void disp(struct student s1);
  printf("Enter rno and name:");
  scanf("%d%s",&s1.rno,&s1.name);
  disp(s1);
 }
  	void disp(struct student s1)
  {
  	printf("\nRoll No=%d",s1.rno);
  	printf("\nName=%s",s1.name);
  }
