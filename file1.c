#include<stdio.h>
int main()
{
	char ch;
	FILE *f1;
	f1=fopen("ram.txt","r");
	if(f1==NULL)
	{
		printf("\nFile not found");
		getch();
		
	}
	while(!feof(f1))
	{
		ch=fgetc(f1);
		printf("%c",ch);
	}
	fclose(f1);
	getch();
}
