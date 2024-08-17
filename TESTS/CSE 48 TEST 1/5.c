//Write a c program to compute the transpose of a sparse matrix efficiently the input matrix should be given in coo(coordinate list format). And the output should also be in the coo format discuss the time complexity of your approach
#include <stdio.h>

// Function to compute the transpose of a sparse matrix in COO format
void transposeCOO(int rows, int cols, int nnz, int row[], int col[], int val[], 
                  int *transposed_row, int *transposed_col, int *transposed_val) {
    for (int i = 0; i < nnz; i++) {
        transposed_row[i] = col[i];
        transposed_col[i] = row[i];
        transposed_val[i] = val[i];
    }
}

int main() {
    int rows = 4; // Number of rows in the matrix
    int cols = 5; // Number of columns in the matrix
    int nnz = 4;  // Number of non-zero elements

    // Original COO format
    int row[] = {0, 1, 1, 2};
    int col[] = {1, 0, 2, 2};
    int val[] = {10, 20, 30, 40};

    // Arrays to store the transposed matrix in COO format
    int transposed_row[nnz];
    int transposed_col[nnz];
    int transposed_val[nnz];

    // Compute the transpose
    transposeCOO(rows, cols, nnz, row, col, val, transposed_row, transposed_col, transposed_val);

    // Print the transposed matrix
    printf("Transposed matrix in COO format:\n");
    for (int i = 0; i < nnz; i++) {
        printf("(%d, %d, %d)\n", transposed_row[i], transposed_col[i], transposed_val[i]);
    }

    return 0;
}
