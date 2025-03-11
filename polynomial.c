#include <stdio.h>

void display_polynomial() {
    int degree,i;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);
    double coefficients[degree + 1];
    for ( i = 0; i <= degree; i++) {
        printf("Enter the coefficient for x^%d: ", degree - i);
        scanf("%lf", &coefficients[i]);
    }
    printf("The polynomial is: ");
    for ( i = 0; i <= degree; i++) {
        if (coefficients[i] != 0) {
            if (i != 0 && coefficients[i] > 0)
                printf("+");
            if (degree - i > 0)
                printf("%.2lfx^%d ", coefficients[i], degree - i);
            else
                printf("%.2lf", coefficients[i]);
        }
    }
    printf("\n");
}

int main() {
    display_polynomial();
    return 0;
}

