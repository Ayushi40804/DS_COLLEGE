//Given an array containing n distinct numbers from range 0 to n find the missing number in the array. Write a c program to solve this problem without using any additional memory.
#include <stdio.h>

// Function to find the missing number in the array
int findMissingNumber(int arr[], int n) {
    int total_sum = n * (n + 1) / 2;
    int array_sum = 0;

    for (int i = 0; i < n; i++) {
        array_sum += arr[i];
    }

    return total_sum - array_sum;
}

int main() {
    int arr[] = {3, 0, 1, 4,2}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    int missing_number = findMissingNumber(arr, n);

    printf("The missing number is: %d\n", missing_number);

    return 0;
}
