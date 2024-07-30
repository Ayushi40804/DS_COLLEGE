#include <stdio.h>
#include <stdlib.h>
void rotate(int *arr_AYUSHI, int n_AYUSHI, int k_AYUSHI);
int main()
{
    int n_AYUSHI, k_AYUSHI;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n_AYUSHI);
    int *arr_AYUSHI = (int *)malloc(n_AYUSHI * sizeof(int));
    printf("Enter the elements of the array: ");
    for (int i_AYUSHI = 0; i_AYUSHI < n_AYUSHI; i_AYUSHI++)
    {
        scanf("%d", &arr_AYUSHI[i_AYUSHI]);
    }
    printf("Enter the number of positions to rotate the array: ");
    scanf("%d", &k_AYUSHI);
    rotate(arr_AYUSHI, n_AYUSHI, k_AYUSHI);
    printf("The array after rotating by %d positions is: ", k_AYUSHI);
    for (int i_AYUSHI = 0; i_AYUSHI < n_AYUSHI; i_AYUSHI++)
    {
        printf("%d ", arr_AYUSHI[i_AYUSHI]);
    }
    return 0;
}
void rotate(int *arr_AYUSHI, int n_AYUSHI, int k_AYUSHI)
{
    int *temp_AYUSHI = (int *)malloc(k_AYUSHI * sizeof(int));
    for (int i_AYUSHI = 0; i_AYUSHI < k_AYUSHI; i_AYUSHI++)
    {
        temp_AYUSHI[i_AYUSHI] = arr_AYUSHI[n_AYUSHI - k_AYUSHI + i_AYUSHI];
    }
    for (int i_AYUSHI = n_AYUSHI - 1; i_AYUSHI >= k_AYUSHI; i_AYUSHI--)
    {
        arr_AYUSHI[i_AYUSHI] = arr_AYUSHI[i_AYUSHI - k_AYUSHI];
    }
    for (int i_AYUSHI = 0; i_AYUSHI < k_AYUSHI; i_AYUSHI++)
    {
        arr_AYUSHI[i_AYUSHI] = temp_AYUSHI[i_AYUSHI];
    }
}