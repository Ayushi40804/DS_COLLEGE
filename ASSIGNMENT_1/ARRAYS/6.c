//Given two sorted arrays, write a function to merge them into a single sorted array without using any extra space (merge in-place).
#include <stdio.h>
void merge(int arr1[], int arr2[], int n, int m)
{
    for (int i_AYUSHI = 0; i_AYUSHI < n; i_AYUSHI++)
    {
        if (arr1[i_AYUSHI] > arr2[0])
        {
            int temp_AYUSHI = arr1[i_AYUSHI];
            arr1[i_AYUSHI] = arr2[0];
            arr2[0] = temp_AYUSHI;
            int first_AYUSHI = arr2[0];
            int k_AYUSHI;
            for (k_AYUSHI = 1; k_AYUSHI < m && arr2[k_AYUSHI] < first_AYUSHI; k_AYUSHI++)
            {
                arr2[k_AYUSHI - 1] = arr2[k_AYUSHI];
            }
            arr2[k_AYUSHI - 1] = first_AYUSHI;
        }
    }
}
int main()
{
    int n, m;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n);
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &m);
    int arr1[n], arr2[m];
    printf("Enter the elements of the first array in sorted order: ");
    for (int i_AYUSHI = 0; i_AYUSHI < n; i_AYUSHI++)
    {
        scanf("%d", &arr1[i_AYUSHI]);
    }
    printf("Enter the elements of the second array in sorted order: ");
    for (int i_AYUSHI = 0; i_AYUSHI < m; i_AYUSHI++)
    {
        scanf("%d", &arr2[i_AYUSHI]);
    }
    merge(arr1, arr2, n, m);
    printf("The merged sorted array is: ");
    for (int i_AYUSHI = 0; i_AYUSHI < n; i_AYUSHI++)
    {
        printf("%d ", arr1[i_AYUSHI]);
    }
    for (int i_AYUSHI = 0; i_AYUSHI < m; i_AYUSHI++)
    {
        printf("%d ", arr2[i_AYUSHI]);
    }
    return 0;
}