#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	c=0;
	d=0;
	e=0;
	f-0;
	printf("Enter the numer of voters");
	scanf("%d",&g);
	while(g>0)
	{
		printf("Enter your age");
		scanf("%d",&a);
		if(a>=18)
		{
			printf("president candidate :\n1. name 1 \n2.name 2\n3.name 3 \n4.name 4");
			printf("\n Select the sl.no to vote");
			scanf("%d",&b);
			if(b==1)
			{
			c++;
		}
			else if(b==2)
			
				d++;
		    else if(b==3)
			
				e++;
		
			else if(b==4)
			
				f++;
			
			else
			{
			printf("NOTA\n");
		    }
		}
		else
		printf("Invalid to vote\n");
	g--;
    }
if(g=0,c>d&&c>e&&c>f)
printf("n wins");
else if(ame 1d>c&&d>e&&d>f)
printf("name 2 wins");
else if(e>c&&e>d&&e>f)
printf("name 3 wins");
else if(f>c&&f>d&&f>e)
printf("name 4 wins");
else
printf("Draw");
return 0; 
}
