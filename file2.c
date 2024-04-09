#include<stdio.h>
int main()
{
	char ch;
	FILE *f1,*f2;
	f1=fopen("ram.txt","r");
	f2=fopen("xyz.txt","w");
	if(f1==NULL)
	{
		printf("\n File not found");
		getch();
		exit(0);
	}
	while(!feof(f1))
	{
		ch=fgetc(f1);
		fputc(ch,f2);
	}
	fclose(f1);
	fclose(f2);
	printf("File copy Successfully");
	getch();
}
