//Read ten complex numers and display them using array of complex structure. 
#include <stdio.h>
typedef struct complex_struct
{
    float real;
    float imag;
} complex;
int main()
{
    complex n[10];
    for (int i = 0; i < 10; i++)
    {
        printf("For %d complex number", i + 1);
        scanf("%f %f", &n[i].real, &n[i].imag);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("Complex number %d = %.1f + %.1fi\n", i + 1, n[i].real, n[i].imag);
    }
    return 0;
}