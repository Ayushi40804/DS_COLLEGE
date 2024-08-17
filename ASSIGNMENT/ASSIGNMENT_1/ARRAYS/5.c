#include <stdio.h>
void subarraySum(int arr[], int n_AYUSHI, int sum_AYUSHI);
int main()
{
    int n_AYUSHI, sum_AYUSHI;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n_AYUSHI);
    int arr[n_AYUSHI];
    printf("Enter the elements of the array: ");
    for (int i_AYUSHI = 0; i_AYUSHI < n_AYUSHI; i_AYUSHI++)
    {
        scanf("%d", &arr[i_AYUSHI]);
    }
    printf("Enter the sum to find: ");
    scanf("%d", &sum_AYUSHI);
    subarraySum(arr, n_AYUSHI, sum_AYUSHI);
    return 0;
}

void subarraySum(int arr[], int n_AYUSHI, int sum_AYUSHI)
{
    int curr_sum_AYUSHI = arr[0], first_AYUSHI = 0, i_AYUSHI;
    for (i_AYUSHI = 1; i_AYUSHI <= n_AYUSHI; i_AYUSHI++)
    {
        while (curr_sum_AYUSHI > sum_AYUSHI && first_AYUSHI < i_AYUSHI - 1)
        {
            curr_sum_AYUSHI = curr_sum_AYUSHI - arr[first_AYUSHI];
            first_AYUSHI++;
        }
        if (curr_sum_AYUSHI == sum_AYUSHI)
        {
            printf("Sum found between indexes %d and %d\n", first_AYUSHI, i_AYUSHI - 1);
            return;
        }
        if (i_AYUSHI < n_AYUSHI)
            curr_sum_AYUSHI = curr_sum_AYUSHI + arr[i_AYUSHI];
    }
    printf("No subarray found\n");
}