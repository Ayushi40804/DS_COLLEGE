#include <stdio.h>
#include <stdlib.h>
void read(int **arr, int row, int col);
void display(int **arr, int row, int col);
int main()
{
    int row, col;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);
    int **arr = (int **)malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++)
    {
        arr[i] = (int *)malloc(col * sizeof(int));
    }
    read(arr, row, col);
    display(arr, row, col);
    for (int i = 0; i < row; i++)
    {
        free(arr[i]);
    }
    free(arr);
    return 0;
}

void read(int **arr, int row, int col)
{
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void display(int **arr, int row, int col)
{
    printf("The elements of the array are: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
