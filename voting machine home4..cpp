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
			printf("president candidate :\n1. Krishnan \n2.Radhika\n3.Poornima \n4.Neelima");
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
printf("Krishnan wins");
else if(d>c&&d>e&&d>f)
printf("Radhika wins");
else if(e>c&&e>d&&e>f)
printf("Poornima wins");
else if(f>c&&f>d&&f>e)
printf("Neelima wins");
else
printf("Draw");
return 0; 
}
