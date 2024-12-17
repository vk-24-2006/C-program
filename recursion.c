#include<stdio.h>
int a(int i,int j)
{
	printf("Enter two numbers ");
	scanf("%d %d",&i,&j);
	printf("%d",i+j);
    return 3;
}
int main()
{
	int b,c;
	a(b,c);
	return 0;
}
