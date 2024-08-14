//create a menu driven program on array operations like insert, delete, search, traversal. the insert function should reallocate the memory while inserting the element
#include <stdio.h>
#include <stdlib.h>

void insert(int *arr, int *size, int element, int position);
void delete(int *arr, int *size, int position);
void search(int *arr, int *size, int element);
void traverse(int *arr, int *size);
//include to read array in main function too
int main(){
    int size;
    printf("Enter the initial size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size*sizeof(int));

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int choice, element, position;
    while(1){
        printf("Enter your choice: \n1. Insert\n2. Delete\n3. Search\n4. Traverse\n5. Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                printf("Enter the position to insert: ");
                scanf("%d", &position);
                insert(arr, &size, element, position);
                break;
            case 2:
                printf("Enter the position to delete: ");
                scanf("%d", &position);
                delete(arr, &size, position);
                break;
            case 3:
                printf("Enter the element to search: ");
                scanf("%d", &element);
                search(arr, &size, element);
                break;
            case 4:
                traverse(arr, &size);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
}

void insert(int *arr, int *size, int element, int position){
    *size += 1;
    arr = (int *)realloc(arr, *size*sizeof(int));
    for (int i = *size-1; i > position; i--) {
        arr[i] = arr[i-1];
    }
    arr[position] = element;
}

void delete(int *arr, int *size, int position){
    for (int i = position; i < *size-1; i++) {
        arr[i] = arr[i+1];
    }
    *size -= 1;
    arr = (int *)realloc(arr, *size*sizeof(int));
}

void search(int *arr, int *size, int element){
    for (int i = 0; i < *size; i++) {
        if (arr[i] == element) {
            printf("Element found at position %d\n", i);
            return;
        }
    }
    printf("Element not found\n");
}

void traverse(int *arr, int *size){
    for (int i = 0; i < *size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}