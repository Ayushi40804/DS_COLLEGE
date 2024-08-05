//Write a menu driven program to create a structure to represent complex number and perform the following operation using function :
//1. addition of two complex number  (call by value)
//2. multiplication of two complex number (call by address)
//Sample Input/Output:

//Enter complex number 1: 3  4
//Enter complex number 2: 4  5

//MENU
//1. addition
//2. multiplication
//Enter your choice: 1
	
//Sum=7+9i
//Enter your choice: 2

//Sum=4+19i

#include <stdio.h>
#include <stdlib.h>
struct complex
{
    float real;
    float imag;
};
void add(struct complex c1, struct complex c2)
{
    struct complex sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    printf("Sum=%.1f+%.1fi\n", sum.real, sum.imag);
}
void multiply(struct complex *c1, struct complex *c2)
{
    struct complex mul;
    mul.real = c1->real * c2->real - c1->imag * c2->imag;
    mul.imag = c1->real * c2->imag + c1->imag * c2->real;
    printf("Product=%.1f+%.1fi\n", mul.real, mul.imag);
}
int main()
{
    struct complex c1, c2;
    printf("Enter complex number 1: ");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("Enter complex number 2: ");
    scanf("%f %f", &c2.real, &c2.imag);
    int choice;
    do
    {
        printf("\nMENU\n1. addition\n2. multiplication\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add(c1, c2);
            break;
        case 2:
            multiply(&c1, &c2);
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (1);
    return 0;
}