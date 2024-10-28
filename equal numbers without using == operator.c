#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers");
	scanf("%d %d",&a,&b);
    if(a<b || b<a)
    {
    	printf("The numbers are not equal");
	}
	else
	{
		printf("The numbers are equal");
	}
	return 0;
}

