//calculate the factors of a number using recurssion
#include <stdio.h>
void factors(int n, int i)
{
    if (i <= n)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
        factors(n, i + 1);
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factors of %d are: ", n);
    factors(n, 1);
    return 0;
}