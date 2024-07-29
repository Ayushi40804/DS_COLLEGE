//Write a menu driven program to create a structure to represent complex number and perform the
//following operation using function :
//1. addition of two complex number (call by value)
//2. multiplication of two complex number (call by address)
#include <stdio.h>
#include <stdlib.h>
struct Complex{
    float real;
    float imag;
};
void add(struct Complex c1, struct Complex c2);
void multiply(struct Complex *c1, struct Complex *c2);
int main(){
    struct Complex c1, c2;
    printf("Enter the real and imaginary part of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("Enter the real and imaginary part of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);
    add(c1, c2);
    multiply(&c1, &c2);
    return 0;
}
void add(struct Complex c1, struct Complex c2){
    struct Complex sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    printf("Sum of the two complex numbers: %.2f + %.2fi\n", sum.real, sum.imag);
}
void multiply(struct Complex *c1, struct Complex *c2){
    struct Complex product;
    product.real = c1->real * c2->real - c1->imag * c2->imag;
    product.imag = c1->real * c2->imag + c1->imag * c2->real;
    printf("Product of the two complex numbers: %.2f + %.2fi\n", product.real, product.imag);
}