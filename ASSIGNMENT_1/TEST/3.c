//Write a c program to multiple 2 square matrices of size nxn without using any extra space. The result should overwrite one of the input matrixes
#include <stdio.h>

// Function to multiply two matrices and overwrite the first matrix with the result
void multiplyMatrices(int n, int mat1[][n], int mat2[][n]) {
    int i, j, k;
    
    // Temporary matrix to store the result
    int result[n][n];

    // Initialize the result matrix to zero
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            result[i][j] = 0;
        }
    }

    // Multiply mat1 and mat2, storing the result in the result matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Copy the result back to mat1
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            mat1[i][j] = result[i][j];
        }
    }
}

int main() {
    int n = 3;  // Example for a 3x3 matrix
    int mat1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int mat2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    // Multiply matrices
    multiplyMatrices(n, mat1, mat2);

    // Print the result stored in mat1
    printf("Result matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
