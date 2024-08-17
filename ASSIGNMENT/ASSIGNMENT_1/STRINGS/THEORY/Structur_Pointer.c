#include <stdio.h>
#include <stdlib.h>
typedef struct complex_struct
{
    float real;
    float imag;
} complex;

complex *add(complex n1, complex n2);
complex *multiply(complex n1, complex n2);

int main()
{
    complex n1, n2, *result_add, *result_multiply;
    printf("For first complex number \n");
    printf("Enter the real and imaginary parts respectively: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("For second complex number \n");
    printf("Enter the real and imaginary parts respectively: ");
    scanf("%f %f", &n2.real, &n2.imag);

    result_add = add(n1, n2);
    result_multiply = multiply(n1, n2);

    printf("Sum = %.1f + %.1fi\n", result_add->real, result_add->imag);
    printf("Multiplication = %.1f + %.1fi\n", result_multiply->real, result_multiply->imag);

    return 0;
}
complex *add(complex n1, complex n2)
{
    complex *temp = (complex *)malloc(sizeof(complex));
    temp->real = n1.real + n2.real;
    temp->imag = n1.imag + n2.imag;
    return temp;
}
complex *multiply(complex n1, complex n2)
{
    complex *temp = (complex *)malloc(sizeof(complex));
    temp->real = n1.real * n2.real - n1.imag * n2.imag;
    temp->imag = n1.real * n2.imag + n1.imag * n2.real;
    return temp;
}