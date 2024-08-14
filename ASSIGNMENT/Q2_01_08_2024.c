//Add and Multiply 3 complex numbers.
#include <stdio.h>
typedef struct complex
{
    float real;
    float imag;
} complex;
complex add(complex n1, complex n2);
complex multiply(complex n1, complex n2);
int main()
{
    complex n1, n2, n3, result1_add, result1_multiply , result2_add, result2_multiply;
    printf("For first complex number \n");
    printf("Enter the real and imaginary parts respectively: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("For second complex number \n");
    printf("Enter the real and imaginary parts respectively: ");
    scanf("%f %f", &n2.real, &n2.imag);
    printf("For third complex number \n");
    printf("Enter the real and imaginary parts respectively: ");
    scanf("%f %f", &n3.real, &n3.imag);

    result1_add = add(n1, n2);
    result1_multiply = multiply(n1, n2);

    result2_add = add(result1_add, n3);
    result2_multiply = multiply(result1_multiply, n3);

    printf("Sum = %.1f + %.1fi\n", result2_add.real, result2_add.imag);
    printf("Multiplication = %.1f + %.1fi\n", result2_multiply.real, result2_multiply.imag);
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