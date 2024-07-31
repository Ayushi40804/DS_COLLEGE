#include <stdio.h>
#include <stdlib.h>
void reverse(int *arr_AYUSHI, int n_AYUSHI);
int main()
{
    int n_AYUSHI;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n_AYUSHI);
    int *arr_AYUSHI = (int *)malloc(n_AYUSHI * sizeof(int));
    printf("Enter the elements of the array: ");
    for (int i_AYUSHI = 0; i_AYUSHI < n_AYUSHI; i_AYUSHI++)
    {
        scanf("%d", &arr_AYUSHI[i_AYUSHI]);
    }
    reverse(arr_AYUSHI, n_AYUSHI);
    printf("The array after reversing is: ");
    for (int i_AYUSHI = 0; i_AYUSHI < n_AYUSHI; i_AYUSHI++)
    {
        printf("%d ", arr_AYUSHI[i_AYUSHI]);
    }
    free(arr_AYUSHI);
    return 0;
}
void reverse(int *arr_AYUSHI, int n_AYUSHI)
{
    int *start_AYUSHI = arr_AYUSHI;
    int *end_AYUSHI = arr_AYUSHI + n_AYUSHI - 1;
    while (start_AYUSHI < end_AYUSHI)
    {
        int temp_AYUSHI = *start_AYUSHI;
        *start_AYUSHI = *end_AYUSHI;
        *end_AYUSHI = temp_AYUSHI;
        start_AYUSHI++;
        end_AYUSHI--;
    }
}