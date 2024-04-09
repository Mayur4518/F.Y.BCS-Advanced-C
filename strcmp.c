#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int k;
	printf("Enter string 1:");
	gets(s1);
	printf("Enter string 2:");
	gets(s2);
	k=strcmp(s1,s2);
	if(k==0)
	  printf("Strings are same");
	else if(k>0)
	  printf("First string is greater");
	else if(k<0)
	  printf("Second string is greater");
}
