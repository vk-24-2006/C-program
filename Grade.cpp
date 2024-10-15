#include<stdio.h>
int main()
{
	int E,SL,P,C,CS,M,avg;
	printf("Your score for English :");
	scanf("%d",&E);
	printf("Your score for Second Language :");
	scanf("%d",&SL);
	printf("Yourcore for Physics :");
	scanf("%d",&P);
	printf("Your score fot Chemistry :");
	scanf("%d",&C);
	printf("Your score for Computer Science :");
	scanf("%d",&CS);
	printf("Your score for Mathematics :");
	scanf("%d",&M);
	avg=(E+SL+P+C+CS+M)/6;
	if(avg>=90)
	{
		printf("Grade is A+");
	}
	else if(avg>=80)
	{
		printf("Grade is B+");
	}
	else if(avg>=70)
	{
		printf("Grade is C+");
	}
	else if(avg>=60)
	{
		printf("Grade is D+");
	}
	else
	{
		printf("Failed");
	}
	return 0;
}
