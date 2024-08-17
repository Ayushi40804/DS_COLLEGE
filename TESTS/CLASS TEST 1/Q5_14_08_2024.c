//given a sparse matrix in dictionary of keys format write a program in c to calculate the sum of its diagonals.
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int row;
    int col;
    int value;
} Element;

int main() {
    int n = 4; // Size of the matrix (4x4)
    int dok_size = 5; // Number of non-zero elements

    // Initialize the array of Elements (DOK format)
    Element dok[dok_size];

    // Populate the DOK array (Example Input)
    dok[0] = (Element){0, 0, 5};  // Element at (0, 0) with value 5
    dok[1] = (Element){0, 3, 8};  // Element at (0, 3) with value 8
    dok[2] = (Element){1, 1, 3};  // Element at (1, 1) with value 3
    dok[3] = (Element){2, 2, 6};  // Element at (2, 2) with value 6
    dok[4] = (Element){3, 0, 7};  // Element at (3, 0) with value 7

    int diagonal_sum = 0;


    // Calculate the sum of the diagonals
    for (int i = 0; i < dok_size; i++) {
        if (dok[i].row == dok[i].col) {
            diagonal_sum += dok[i].value;
        }
        if (dok[i].row + dok[i].col == n - 1) {
           diagonal_sum += dok[i].value;
        }
    }

    // Print the results
    printf("Sum of primary diagonal: %d\n", diagonal_sum);

    return 0;
}
