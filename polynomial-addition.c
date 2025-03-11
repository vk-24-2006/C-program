#include<stdio.h>
int main() 
{
    int i;
    int poly[6];
    printf("The degree of the polynomial canbe atmost 5");
    printf("\nIf coefficient is 0 Please type zero");
    printf("\nEnter the coefficient of degree 0:");
    scanf("%d",&poly[0]);
    printf("\nEnter the coefficient of degree 1:");
    scanf("%d",&poly[1]);
    printf("\nEnter the coefficient of degree 2:");
    scanf("%d",&poly[2]);
    printf("\nEnter the coefficient of degree 3:");
    scanf("%d",&poly[3]);
    printf("\nEnter the coefficient of degree 4:");
    scanf("%d",&poly[4]);
    printf("\nEnter the coefficient of degree 5:");
    scanf("%d",&poly[5]);

    for(i=5;i>=0;i--) 
	{
        if(poly[i]==0) 
		{
            continue;
        }
        else
		{
            printf("%dx^%d",poly[i],i);
            if (i-1>=0) {
                printf(" + ");
            }
            else 
			{
                break;
            }
        }
    }
    printf("\n");
    printf("POLYNOMIAL 2\n");


    int poly2[6];
    printf("The degree of the polynomial canbe atmost 5");
    printf("\nIf coefficient is 0 Please type zero");
    printf("\nEnter the coefficient of degree 0:");
    scanf("%d",&poly2[0]);
    printf("\nEnter the coefficient of degree 1:");
    scanf("%d",&poly2[1]);
    printf("\nEnter the coefficient of degree 2:");
    scanf("%d",&poly2[2]);
    printf("\nEnter the coefficient of degree 3:");
    scanf("%d",&poly2[3]);
    printf("\nEnter the coefficient of degree 4:");
    scanf("%d",&poly2[4]);
    printf("\nEnter the coefficient of degree 5:");
    scanf("%d",&poly2[5]);

    for(i=5;i>=0;i--)
	{
        if(poly2[i]==0) 
		{
            continue;
        }
        else{
            printf("%dx^%d",poly2[i],i);
            if (i-1>=0) {
                printf(" + ");
            }
            else {
                break;
            }
        }
    }
    printf("\n");
    int polys[6];
    for(i=0;i<=5;i++)
	{
        polys[i] = poly2[i]+poly[i];
    }
    for(i=5;i>=0;i--)
	{
        if(polys[i]==0)
		{
            continue;
        }
        else
		{
            printf("%dx^%d",polys[i],i);
            if (i-1>=0) {
                printf(" + ");
            }
            else 
			{
                break;
            }
        }
    }
 return 0;
}
