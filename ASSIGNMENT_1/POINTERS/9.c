//Create a program that intentionally causes a memory leak by allocating memory and not freeing it. Then modify the program to fix the memory leak and explain the changes made.
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
    free(arr_AYUSHI);
    return 0;
}