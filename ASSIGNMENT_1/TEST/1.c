//Consider a 2d array array[3][4] .write a c program to print the memory address of each element in the array and explain how elements are stored in memory  row major order
#include <stdio.h>
int main()
{
    int array[3][4];
    printf("The address of each element in the array is as follows:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The address of array[%d][%d] is %u\n", i, j, &array[i][j]);
        }
    }
    return 0;
}
