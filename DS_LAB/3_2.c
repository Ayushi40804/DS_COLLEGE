#include <stdio.h>
void multiplyPolynomials(int poly1[], int poly2[], int result[], int size1, int size2) {
    int resultSize = size1 + size2 - 1;
    for (int i = 0; i < resultSize; i++) {
        result[i] = 0;
    }
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            result[i + j] += poly1[i] * poly2[j];
        }
    }
}
int main() {
    int size1, size2;
    printf("Enter the degree of the first polynomial: ");
    scanf("%d", &size1);
    size1 += 1; 
    int poly1[size1];
    printf("Enter the coefficients of the first polynomial from lowest to highest degree:\n");
    for (int i = 0; i < size1; i++) {
        printf("Coefficient of x^%d: ", i);
        scanf("%d", &poly1[i]);
    }
    printf("Enter the degree of the second polynomial: ");
    scanf("%d", &size2);
    size2 += 1; 
    int poly2[size2];
    printf("Enter the coefficients of the second polynomial from lowest to highest degree:\n");
    for (int i = 0; i < size2; i++) {
        printf("Coefficient of x^%d: ", i);
        scanf("%d", &poly2[i]);
    }
    int resultSize = size1 + size2 - 1;
    int result[resultSize];
    multiplyPolynomials(poly1, poly2, result, size1, size2);
    printf("Resultant Polynomial: ");
    for (int i = resultSize - 1; i >= 0; i--) {
        printf("%dx^%d", result[i], i);
        if (i > 0 && result[i - 1] >= 0) {
            printf(" + ");
        }
    }
    printf("\n");
    return 0;
}
