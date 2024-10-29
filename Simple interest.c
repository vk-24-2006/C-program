#include<stdio.h>
int main()
{
	int p,r,t,s;
	printf("Enter Principle amount");
	scanf("%d",&p);
	printf("Enter the Rate");
	scanf("%d",&r);
	printf("Enter the Time period");
	scanf("%d",&t);
	s=(p*r*t)/100;
	printf("%d",s);
	return 0;
}
