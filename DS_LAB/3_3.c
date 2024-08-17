#include <stdio.h>
void addPolynomials(int poly1[], int poly2[], int result[], int size1, int size2);
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
    int maxSize = size1 > size2 ? size1 : size2;
    int result[maxSize];
    addPolynomials(poly1, poly2, result, size1, size2);
    printf("Resultant Polynomial: ");
    for (int i = maxSize - 1; i >= 0; i--) {
        printf("%dx^%d ", result[i], i);
        if (i > 0 && result[i - 1] >= 0) {
            printf("+ ");
        }
    }
    printf("\n");
    return 0;
}
void addPolynomials(int poly1[], int poly2[], int result[], int size1, int size2) {
    int maxSize = size1 > size2 ? size1 : size2;
    for (int i = 0; i < maxSize; i++) {
        result[i] = 0;
    }
    for (int i = 0; i < size1; i++) {
        result[i] += poly1[i];
    }
    for (int i = 0; i < size2; i++) {
        result[i] += poly2[i];
    }
}