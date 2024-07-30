//Implement a function to create a dynamic 2D array (matrix) using pointers. Provide functions to fill the matrix with values, print the matrix, and free the allocated memory.
#include <stdio.h>
#include <stdlib.h>
int **createMatrix(int rows_AYUSHI, int cols_AYUSHI);
void fillMatrix(int **matrix_AYUSHI, int rows_AYUSHI, int cols_AYUSHI);
void printMatrix(int **matrix_AYUSHI, int rows_AYUSHI, int cols_AYUSHI);
void freeMatrix(int **matrix_AYUSHI, int rows_AYUSHI);
int main()
{
    int rows_AYUSHI, cols_AYUSHI;
    printf("Enter the number of rows and columns in the matrix: ");
    scanf("%d %d", &rows_AYUSHI, &cols_AYUSHI);
    int **matrix_AYUSHI = createMatrix(rows_AYUSHI, cols_AYUSHI);
    fillMatrix(matrix_AYUSHI, rows_AYUSHI, cols_AYUSHI);
    printf("The matrix is:\n");
    printMatrix(matrix_AYUSHI, rows_AYUSHI, cols_AYUSHI);
    freeMatrix(matrix_AYUSHI, rows_AYUSHI);
    return 0;
}
int **createMatrix(int rows_AYUSHI, int cols_AYUSHI)
{
    int **matrix_AYUSHI = (int **)malloc(rows_AYUSHI * sizeof(int *));
    for (int i_AYUSHI = 0; i_AYUSHI < rows_AYUSHI; i_AYUSHI++)
    {
        matrix_AYUSHI[i_AYUSHI] = (int *)malloc(cols_AYUSHI * sizeof(int));
    }
    return matrix_AYUSHI;
}
void fillMatrix(int **matrix_AYUSHI, int rows_AYUSHI, int cols_AYUSHI)
{
    printf("Enter the elements of the matrix:\n");
    for (int i_AYUSHI = 0; i_AYUSHI < rows_AYUSHI; i_AYUSHI++)
    {
        for (int j_AYUSHI = 0; j_AYUSHI < cols_AYUSHI; j_AYUSHI++)
        {
            scanf("%d", &matrix_AYUSHI[i_AYUSHI][j_AYUSHI]);
        }
    }
}
void printMatrix(int **matrix_AYUSHI, int rows_AYUSHI, int cols_AYUSHI)
{
    for (int i_AYUSHI = 0; i_AYUSHI < rows_AYUSHI; i_AYUSHI++)
    {
        for (int j_AYUSHI = 0; j_AYUSHI < cols_AYUSHI; j_AYUSHI++)
        {
            printf("%d ", matrix_AYUSHI[i_AYUSHI][j_AYUSHI]);
        }
        printf("\n");
    }
}
void freeMatrix(int **matrix_AYUSHI, int rows_AYUSHI)
{
    for (int i_AYUSHI = 0; i_AYUSHI < rows_AYUSHI; i_AYUSHI++)
    {
        free(matrix_AYUSHI[i_AYUSHI]);
    }
    free(matrix_AYUSHI);
}