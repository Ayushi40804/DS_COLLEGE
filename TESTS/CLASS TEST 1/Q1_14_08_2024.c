//
#include <stdio.h>
#include <stdlib.h>
void max_sum_of_subarray(int arr[], int n, int k)
{
    int i, j, sum = 0, max_sum = 0, count = 0;
    for (i = 0; i < n; i++)
    {
        sum = 0;
        count = 0;
        for (j = i; j < n; j++)
        {
            if (count == k)
            {
                break;
            }
            if (arr[j] != arr[j + 1])
            {
                count++;
            }
            sum += arr[j];
            if (sum > max_sum)
            {
                max_sum = sum;
            }
        }
    }
    printf("Maximum sum of subarray is %d", max_sum);
}
int main()
{
    int n, k;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);
    max_sum_of_subarray(arr, n, k);
    return 0;
}