#include<stdio.h>
int main()
{
	int a,i,array[a],big=0;
	printf("Enter the number of elements :");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		printf("Enter element at [%d] : ",i);
		scanf("%d",&array[i]);
	}
		if(array[i]>big)
		{
			big=array[i];
		}
	
	printf("Big element is %d",big);
	
	return 0;
}
