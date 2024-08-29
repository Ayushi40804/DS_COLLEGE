//implement double stacks in one array
#include <stdio.h>
#include <stdlib.h>

void push(int *arr, int *top1, int *top2, int n, int stack, int data);
void pop(int *arr, int *top1, int *top2, int n, int stack);
void display(int *arr, int top1, int top2);

int main(){
    int n = 10;
    int arr[n];
    int top1 = -1, top2 = n;
    int choice, data, stack;
    while (1)
    {
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter stack number (1 or 2): ");
            scanf("%d", &stack);
            printf("Enter data: ");
            scanf("%d", &data);
            push(arr, &top1, &top2, n, stack, data);
            break;
        case 2:
            printf("Enter stack number (1 or 2): ");
            scanf("%d", &stack);
            pop(arr, &top1, &top2, n, stack);
            break;
        case 3:
            display(arr, top1, top2);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}

void push(int *arr, int *top1, int *top2, int n, int stack, int data)
{
    if (*top1 == *top2 - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    else if (stack == 1)
    {
        arr[++(*top1)] = data;
    }
    else
    {
        arr[--(*top2)] = data;
    }
}

void pop(int *arr, int *top1, int *top2, int n, int stack)
{
    if (stack == 1)
    {
        if (*top1 == -1)
        {
            printf("Stack Underflow\n");
            return;
        }
        printf("Popped element: %d\n", arr[(*top1)--]);
    }
    else
    {
        if (*top2 == n)
        {
            printf("Stack Underflow\n");
            return;
        }
        printf("Popped element: %d\n", arr[(*top2)++]);
    }
}

void display(int *arr, int top1, int top2)
{
    printf("Stack 1: ");
    for (int i = 0; i <= top1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nStack 2: ");
    for (int i = top2; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}