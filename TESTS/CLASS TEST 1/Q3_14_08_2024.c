//given an array of integers find the maximum product of exactly k elements that can be obtained from any contigeous subarray.
#include <stdio.h>
#include <limits.h>

int maxProduct(int arr[], int n, int k) {
    if (k > n) {
        return 0; 
    }
    int max_product = INT_MIN;
    int current_product = 1;
    for (int i = 0; i < k; i++) {
        current_product *= arr[i];
    }
    max_product = current_product;
    for (int i = k; i < n; i++) {
        current_product = (current_product / arr[i - k]) * arr[i];
        if (current_product > max_product) {
            max_product = current_product;
        }
    }

    return max_product;
}

int main() {
    int arr[] = {1, 5, -2, 3, -4, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int result = maxProduct(arr, n, k);
    printf("Maximum product of %d contiguous elements is: %d\n", k, result);

    return 0;
}
