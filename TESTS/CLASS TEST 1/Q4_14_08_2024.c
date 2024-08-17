//Remove Duplicates from a sorted array
#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if (n == 0) {
        return 0;
    }
    int i, j = 0;
    for (i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n - 1];
    return j;
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int new_length = removeDuplicates(arr, n);
    printf("New length of the array after removing duplicates: %d\n", new_length);

    return 0;
}
