#include<stdio.h>
int main()
{
	char op;
	int a,b,c;
	printf("Enter [num 1] [+ - * /] [num 2]: ");
	scanf("%d %c %d",&a,&op,&b);
	switch(op)
	{
		case'+':c=a+b;break;
		case'-':c=a-b;break;
		case'*':c=a*b;break;
		case'/':c=a/b;break;
		default:printf("Invalid operator");
	}
	printf("%d%c%d=%d",a,op,b,c);
}
