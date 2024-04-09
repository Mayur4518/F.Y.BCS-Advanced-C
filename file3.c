//copy the content of one file to another
#include<stdio.h>
int main(int argc,char *argv[])
{
	FILE *f1,*f2;
	char ch;
	f1=fopen("ram.txt","r");
	f2=fopen("lakshman.txt","w");
	if(f1==NULL)
	{
		printf("File not found");
		exit(0);
	}
	while (!feof(f1))
	{
	  ch=fgetc(f1);
	  fputc(ch,f2);	
	}
	printf("\nFile copied successfully");
}
