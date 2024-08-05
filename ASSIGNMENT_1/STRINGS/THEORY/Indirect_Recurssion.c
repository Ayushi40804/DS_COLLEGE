#include <stdio.h>
int is_even(int n);
int is_odd(int n);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (is_even(n))
        printf("The number is even\n");
    else
        printf("The number is odd\n");
    return 0;
}
int is_even(int n)
{
    if (n == 0)
        return 1;
    else
        return is_odd(n - 1);
}
int is_odd(int n)
{
    if (n == 0)
        return 0;
    else
        return is_even(n - 1);
}