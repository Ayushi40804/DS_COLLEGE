#include <stdio.h>
#include <stdlib.h>

void insert(int **arr, int *n, int m, int p)
{
    *arr = (int *)realloc(*arr, (*n + 1) * sizeof(int));
    for (int i = *n; i > p; i--)
    {
        (*arr)[i] = (*arr)[i-1];
    }
    (*arr)[p] = m;
    (*n)++;
}

void dlt(int **arr, int *n, int p)
{
    for (int i = p; i < *n - 1; i++)
    {
        (*arr)[i] = (*arr)[i + 1];
    }
    *arr = (int *)realloc(*arr, (*n - 1) * sizeof(int));
    (*n)--;
}

void linser(int *arr, int n, int m)
{
    if (n == 0)
    {
        printf("Not found!\n");
        return;
    }
    else
    {
        if (arr[n - 1] == m)
        {
            printf("Found in %d\n", (n - 1));
            return;
        }
        else
        {
            return linser(arr, n - 1, m);
        }
    }
}

void traverse(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    int ch;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    traverse(arr, n);
    while (1)
    {
        printf("Choice : ");
        scanf("%d", &ch);
        int m, p;
        switch (ch)
        {
        case 1:
            printf("Enter no. , pos : ");
            scanf("%d %d", &m, &p);
            insert(&arr, &n, m, p);
            break;
        case 2:
            printf("Enter pos : ");
            scanf("%d", &p);
            dlt(&arr, &n, p);
            break;
        case 3:
            printf("Enter no. : ");
            scanf("%d", &m);
            linser(arr, n, m);
            break;
        case 4:
            traverse(arr, n);
            break;
        case 5:
            free(arr);
            return 0;
        default:
            printf("Wrong input!\n");
            break;
        }
    }
}