#include<stdio.h>
int main()
{
	int num1,rev,num2;
	rev=0;
	printf("Enter a number :");
	scanf("%d",&num1);
	num2 = num1;
	while(num1 !=0)
	{
		rev=rev*10+num1%10;
		num1 = num1/10;
	}
	printf("The reversed number is %d ",rev);
	if(rev==num2)
	{
		printf("\n The %d is a paliandrome",num2);
	}
	else
	{
		printf("\n The %d is not a paliandrome",num2);
	}
	return 0;
}
