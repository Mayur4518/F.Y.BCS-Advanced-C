#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	printf("Enter first string:");
	gets(s1);
	printf("Enter second string:");
	gets(s2);
	strcat(s1,s2);
	printf("\n first string=%s",s1);
	printf("\n second string=%s",s2);
}
