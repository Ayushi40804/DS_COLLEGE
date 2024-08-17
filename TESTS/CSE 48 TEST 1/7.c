//Explain the potential pitfalls of naive sparse matrix multiplication. then write a c program that multiplies two sparse matrices efficiently by taking advantage of their sparity. Your program should minimise both time and space complexity.
#include <stdio.h>

#define MAX_NONZERO 100 // Adjust based on the expected number of non-zero elements

// Function to multiply two sparse matrices in COO format
void multiplySparseMatrices(int A_row[], int A_col[], int A_val[], int A_nnz,
                             int B_row[], int B_col[], int B_val[], int B_nnz,
                             int *C_row, int *C_col, int *C_val, int *C_nnz) {
    int i, j;
    int index = 0;

    // Iterate over all non-zero elements of A
    for (i = 0; i < A_nnz; i++) {
        int A_i = A_row[i];
        int A_j = A_col[i];
        int A_val_ij = A_val[i];

        // Iterate over all non-zero elements of B
        for (j = 0; j < B_nnz; j++) {
            int B_i = B_row[j];
            int B_j = B_col[j];
            int B_val_ij = B_val[j];

            // Check if the column of A matches the row of B
            if (A_j == B_i) {
                // Store the result in C
                int C_pos = -1;
                for (int k = 0; k < index; k++) {
                    if (C_row[k] == A_i && C_col[k] == B_j) {
                        C_val[k] += A_val_ij * B_val_ij;
                        C_pos = k;
                        break;
                    }
                }
                if (C_pos == -1) {
                    C_row[index] = A_i;
                    C_col[index] = B_j;
                    C_val[index] = A_val_ij * B_val_ij;
                    index++;
                }
            }
        }
    }
    *C_nnz = index;
}

int main() {
    // Example matrices in COO format
    int A_row[] = {0, 1, 1, 2}; // Row indices of A
    int A_col[] = {0, 1, 2, 2}; // Column indices of A
    int A_val[] = {1, 2, 3, 4}; // Values of A
    int A_nnz = 4; // Number of non-zero elements in A

    int B_row[] = {0, 1, 2, 2}; // Row indices of B
    int B_col[] = {0, 1, 1, 2}; // Column indices of B
    int B_val[] = {5, 6, 7, 8}; // Values of B
    int B_nnz = 4; // Number of non-zero elements in B

    int C_row[MAX_NONZERO], C_col[MAX_NONZERO], C_val[MAX_NONZERO];
    int C_nnz = 0;

    // Multiply A and B
    multiplySparseMatrices(A_row, A_col, A_val, A_nnz,
                           B_row, B_col, B_val, B_nnz,
                           C_row, C_col, C_val, &C_nnz);

    // Print the result in COO format
    printf("Resultant matrix C in COO format:\n");
    for (int i = 0; i < C_nnz; i++) {
        printf("(%d, %d, %d)\n", C_row[i], C_col[i], C_val[i]);
    }

    return 0;
}
