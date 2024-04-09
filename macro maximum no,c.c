#define MIN(a,b) a<b?a:b
int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("Minimum no=%d",MIN(a,b));
}
