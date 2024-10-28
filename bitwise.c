#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	printf("Enter 1st number\n",a);
	printf("Enter 2nd number\n",b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d %d",a,b);
	return 0;
}
