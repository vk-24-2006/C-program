#include<stdio.h>
int main()
{
	int a,rev;
	printf("Enter a two digit number:");
	scanf("%d",&a);
	printf("the original number is %d\n",a);
	rev=(a%10)*10+(a/10);
	printf("Reversed  number is %d",rev);
	
}

