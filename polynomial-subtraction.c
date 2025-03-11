#include <stdio.h>

struct Polynomial
{
    int coeff;
    int exp;
};

void readPolynomial(struct Polynomial poly[], int n)
{
    int i; 
    printf("Enter coefficients and exponents (e.g., coeff exp):\n");
    for (i = 0; i < n; i++)
	{ 
        printf("Term %d: ", i + 1);
        scanf("%d %d", &poly[i].coeff, &poly[i].exp);
    }
}

void displayPolynomial(struct Polynomial poly[], int n)
{
    int i;
    for (i = 0; i < n; i++)
	{
        printf("%dx^%d", poly[i].coeff, poly[i].exp);
        if (i != n - 1) printf(" + ");
    }
    printf("\n");
}

void subtractPolynomials(struct Polynomial poly1[], int n1, struct Polynomial poly2[], int n2, struct Polynomial result[], int *resultSize)
{
    int i, j, k; 
    i = 0; j = 0; k = 0;

    while (i < n1 && j < n2)
	{
        if (poly1[i].exp > poly2[j].exp)
		{
            result[k++] = poly1[i++];
        } else if (poly1[i].exp < poly2[j].exp)
		{
            result[k] = poly2[j];
            result[k].coeff = -result[k].coeff;
            k++;
            j++;
        }
		else
		{
            result[k].coeff = poly1[i].coeff - poly2[j].coeff;
            result[k].exp = poly1[i].exp;
            i++;
            j++;
            k++;
        }
    }
    while (i < n1) result[k++] = poly1[i++];
    while (j < n2) {
        result[k] = poly2[j];
        result[k].coeff = -result[k].coeff;
        k++;
        j++;
    }
}

int main()
{
    int n1, n2, resultSize;
    struct Polynomial poly1[10], poly2[10], result[20];

    printf("Enter the number of terms in the first polynomial: ");
    scanf("%d", &n1);
    readPolynomial(poly1, n1);

    printf("Enter the number of terms in the second polynomial: ");
    scanf("%d", &n2);
    readPolynomial(poly2, n2);

    printf("First Polynomial: ");
    displayPolynomial(poly1, n1);

    printf("Second Polynomial: ");
    displayPolynomial(poly2, n2);

    subtractPolynomials(poly1, n1, poly2, n2, result, &resultSize);

    printf("Resultant Polynomial after Subtraction: ");
    displayPolynomial(result, resultSize);

    return 0;
}

