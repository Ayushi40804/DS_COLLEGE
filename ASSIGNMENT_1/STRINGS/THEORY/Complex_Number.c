#include <stdio.h>
typedef struct complex_struct
{
    float real;
    float imag;
} complex;
complex add(complex n1, complex n2);
complex multiply(complex n1, complex n2);

int main()
{
    complex n1, n2, n3, result_add_1, result_add_2, result_multiply_1, result_multiply_2;
    printf("For first complex number \n");
    printf("Enter the real and imaginary parts respectively: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("For second complex number \n");
    printf("Enter the real and imaginary parts respectively: ");
    scanf("%f %f", &n2.real, &n2.imag);
    printf("For third complex number \n");
    printf("Enter the real and imaginary parts respectively: ");
    scanf("%f %f", &n3.real, &n3.imag);

    result_add_1 = add(n1, n2);
    result_add_2 = add(result_add_1, n3);
    result_multiply_1 = multiply(n1, n2);
    result_multiply_2 = multiply(result_multiply_1, n3);

    printf("Sum = %.1f + %.1fi\n", result_add_2.real, result_add_2.imag);
    printf("Multiplication = %.1f + %.1fi\n", result_multiply_2.real, result_multiply_2.imag);
    return 0;
}

complex add(complex n1, complex n2)
{
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return temp;
}

complex multiply(complex n1, complex n2)
{
    complex temp;
    temp.real = n1.real * n2.real - n1.imag * n2.imag;
    temp.imag = n1.real * n2.imag + n1.imag * n2.real;
    return temp;
}