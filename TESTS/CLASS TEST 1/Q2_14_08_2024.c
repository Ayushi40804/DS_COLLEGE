//
#include <stdio.h>
#include <stdlib.h>
void longest_arithematic_subsequence(int arr[], int n)
{
    int i, j, count = 0, max_count = 0, diff = 0;
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = i; j < n; j++)
        {
            if (count == 0)
            {
                diff = arr[j] - arr[i];
                count++;
            }
            else if (arr[j] - arr[j - 1] == diff)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if (count > max_count)
        {
            max_count = count;
        }
    }
    printf("Length of longest arithematic subsequence is %d 7 15", max_count);
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    longest_arithematic_subsequence(arr, n);
    return 0;
}