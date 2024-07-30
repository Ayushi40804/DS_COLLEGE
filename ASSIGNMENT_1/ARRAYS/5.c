//Write a function to find the subarray with the given sum in an array of integers. For example, in the array [1, 4, 20, 3, 10, 5], the subarray [4, 20, 3] has the sum 27.
#include <stdio.h>
void subarraySum(int arr[], int n, int sum)
{
    int curr_sum = arr[0], start = 0, i;
    for (i = 1; i <= n; i++)
    {
        while (curr_sum > sum && start < i - 1)
        {
            curr_sum = curr_sum - arr[start];
            start++;
        }
        if (curr_sum == sum)
        {
            printf("Sum found between indexes %d and %d\n", start, i - 1);
            return;
        }
        if (i < n)
            curr_sum = curr_sum + arr[i];
    }
    printf("No subarray found\n");
}
int main()
{
    int n, sum;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the sum to find: ");
    scanf("%d", &sum);
    subarraySum(arr, n, sum);
    return 0;
}