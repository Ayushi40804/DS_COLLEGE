//Write a c program to segregate even and odd numbers in an array all the even numbers should come before the odd numbers and you should achieve this in a single traversal of the array
#include <stdio.h>

// Function to segregate even and odd numbers
void segregateEvenOdd(int arr[], int n) {
    int j = 0; // Pointer to place the next even number

    // Traverse the array
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            // If arr[i] is even, swap arr[i] with arr[j]
            if (i != j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            // Move the pointer for the next even number
            j++;
        }
    }
}

int main() {
    int arr[] = {12, 33, 45, 9, 8, 90, 3}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    segregateEvenOdd(arr, n);

    printf("Array after segregation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}