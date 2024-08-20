//Array Menu Driven Program 
#include <stdio.h>
#include <stdlib.h>

int * create_Array(int n);
int * insert_at_begnning(int *arr,int *n);
int * insert_at_end(int *arr, int *n);
int * insert(int *arr, int *n);
int * delete_at_begning(int *arr, int *n);
int * delete_at_end(int * arr, int *n);
int * delete(int * arr, int * n);
void traverse(int *arr, int *n);
int * reverse(int * arr, int *n);
int linear_search(int * arr, int * n);
int * pull_element(int * arr, int * n);
void bubble_sort(int * arr, int * n);

int main(){
    int choice,n;
    while(choice!=13){ 
        printf("----MENU----\n");
        printf("1. Create an Array\n");
        printf("2. Insert an Element at the begnning of the Array\n");
        printf("3. Insert an Element at the end of the Array\n");
        printf("4. Insert an Element at any position\n");
        printf("5. Delete an Element at the begnning of the Array\n");
        printf("6. Delete an Element at the end of the Array\n");
        printf("7. Delete an Element at any position\n");
        printf("8. Traverse the Array\n");
        printf("9. Reverse the array\n");
        printf("10. Linear Search for an Element in the array\n");
        printf("11. Pull an Element from any position\n");
        printf("12. Bubble Sort\n");
        printf("13. EXIT\n");
        printf("Enter your choice: ");

        switch (choice)
        {
        case 1:
            printf("----CREATING AN ARRAY----\n");
            printf("Enter the size of array:");
            scanf("%d",&n);
            int * n = n;
            create_array(n);
            break;
        case 2:
            printf("----INSERT AN ELEMENT AT THE BEGNING----\n");
            insert_at_begnning(arr,n);
            break;
        case 3:
            printf("----INSERT AN ELEMENT AT THE END----\n");
            insert_at_end(arr,n);
            break;
        case 4:
            printf("----INSERT AN ELEMENT----\n");
            insert(arr,n);
            break;
        case 5:
            printf("----DELETE AN ELEMENT AT THE BEGNING----\n");
            delete_at_begning(arr,n);
            break;
        case 6:
            printf("----DELETE AN ELEMENT AT THE END----\n");
            delete_at_end(arr,n);
            break;
        case 7:
            printf("----DELETE AN ELEMNT----\n");
            delete(arr,n);
            break;
        case 8:
            printf("----TRAVERSE THE ARRAY----\n");
            traverse(arr,n);
            break;
        case 9:
            printf("----REVERSE THE ARRAY----\n");
            reverse(arr,n);
            break;
        case 10:
            printf("----SEARCHING FOR AN ELEMENT----\n");
            if(linear_search(arr,n)){
                break;
            }
            else{
                printf("Element not found in the array!");
            }
            break;
        case 11:
            printf("----PULL AN ELEMENT FROM ANY POSITION----\n");
            pull_element(arr,n);
            break;
        case 12:
            printf("----BUBBLE SORT----\n");
            bubble_sort(arr,n);
            break;
        case 13:
            break;
        default:
            break;
        }
    }
}

int *create_array(int n){
    int ;
    int *arr=(int*)malloc(n * sizeof (int));
    int ;
    printf("Enter the number of elements to input: ");
    printf("Enter the elements: \n");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    return arr;
}

int * insert_at_begnning(int *arr,int *n){}
int * insert_at_end(int *arr, int *n){}
int * insert(int *arr, int *n){}
int * delete_at_begning(int *arr, int *n){}
int * delete_at_end(int * arr, int *n){}
int * delete(int * arr, int * n){}

void traverse(int *arr, int *n){
    for (int i=0;i<*n;i++){
        printf("%d\t", arr[i]);
    }
}

int * reverse(int * arr, int *n){}

int linear_search(int * arr, int * n){
    int element;
    printf("Enter the Element to Search: ");
    scanf("%d",&element);
    for(int i=0;i<*n;i++){
        if(arr[i]==element){
            printf("Element found at position %d : %d", i+1, arr[i]);
            return 1;
        } 
    }
    return 0;
}

int * pull_element(int * arr, int * n){}
void bubble_sort(int * arr, int * n){}