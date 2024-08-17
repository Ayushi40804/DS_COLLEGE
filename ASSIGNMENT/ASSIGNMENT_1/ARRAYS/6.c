#include <stdio.h>
void merge(int arr1[], int arr2[], int n_AYUSHI, int m_AYUSHI);
int main()
{
    int n_AYUSHI, m_AYUSHI;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n_AYUSHI);
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &m_AYUSHI);
    int arr1[n_AYUSHI], arr2[m_AYUSHI];
    printf("Enter the elements of the first array in sorted order: ");
    for (int i_AYUSHI = 0; i_AYUSHI < n_AYUSHI; i_AYUSHI++)
    {
        scanf("%d", &arr1[i_AYUSHI]);
    }
    printf("Enter the elements of the second array in sorted order: ");
    for (int i_AYUSHI = 0; i_AYUSHI < m_AYUSHI; i_AYUSHI++)
    {
        scanf("%d", &arr2[i_AYUSHI]);
    }
    merge(arr1, arr2, n_AYUSHI, m_AYUSHI);
    printf("The merged sorted array is: ");
    for (int i_AYUSHI = 0; i_AYUSHI < n_AYUSHI; i_AYUSHI++)
    {
        printf("%d ", arr1[i_AYUSHI]);
    }
    for (int i_AYUSHI = 0; i_AYUSHI < m_AYUSHI; i_AYUSHI++)
    {
        printf("%d ", arr2[i_AYUSHI]);
    }
    return 0;
}
void merge(int arr1[], int arr2[], int n_AYUSHI, int m_AYUSHI)
{
    for (int i_AYUSHI = 0; i_AYUSHI < n_AYUSHI; i_AYUSHI++)
    {
        if (arr1[i_AYUSHI] > arr2[0])
        {
            int temp_AYUSHI = arr1[i_AYUSHI];
            arr1[i_AYUSHI] = arr2[0];
            arr2[0] = temp_AYUSHI;
            int first_AYUSHI = arr2[0];
            int k_AYUSHI;
            for (k_AYUSHI = 1; k_AYUSHI < m_AYUSHI && arr2[k_AYUSHI] < first_AYUSHI; k_AYUSHI++)
            {
                arr2[k_AYUSHI - 1] = arr2[k_AYUSHI];
            }
            arr2[k_AYUSHI - 1] = first_AYUSHI;
        }
    }
}