#include <stdio.h>
#include <stdlib.h>

void insert( int arr[], int n_arr , int k_element , int k_position);
void delete( int arr[], int n_arr , int k_position);
void search(int arr[], int n_arr, int k_search);
void traversal(int arr[], int n_arr);

int main(){
    int n_arr , k_element , k_position, i,x;

    printf("Enter the size of the array: ");
    scanf("%d", &n_arr);
    int *arr= (int *)malloc(n_arr*sizeof(int));
    printf("Enter the elements of Array: ");
    for ( i=0; i<n_arr; i++){
        scanf("%d", &arr[i]);
    }
    while (x!=5){
    printf("\nMENU\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Linear Search\n");
    printf("4. Traverse\n");
    printf("5. Exit\n" );

    printf("Enter option:");
    scanf("%d",&x);

    if (x==1){
        printf("Element to insert: ");
        scanf("%d",&k_element);
        printf("Enter Position: ");
        scanf("%d",&k_position);
        insert ( arr , n_arr , k_element , k_position );
    }
    if (x==2){
        printf("Enter Position: ");
        scanf("%d",&k_position);
        delete ( arr , n_arr , k_position);
    }
    if (x==3){
        printf("Enter element to Search: ");
        scanf("%d", &k_element);
        search( arr , n_arr , k_element);
    }
    if (x==4){
        traversal(arr , n_arr);
    }
    if (x==5){
        free(arr);
        return 0;
    }
}
}

void insert( int arr[] , int n_arr , int k_element , int k_position){
    int i ;
    for (i=n_arr ; i >k_position - 1 ; i--){
        arr[i] = arr[i-1];
    }
    arr[k_position - 1] = k_element ;
    for (i=0 ; i<=n_arr ; i++){
        printf("%d ", arr[i]);
    }
}
void delete( int arr[] , int n_arr , int k_position){
    int i;
    for ( i=k_position -1 ; i<n_arr; i++){
        arr[i]=arr[i+1];
    }
    for (i=0 ; i<n_arr- 1 ; i++){
        printf("%d ", arr[i]);
    }

}
void search(int arr[] , int n_arr , int k_search){
    int i;
    for (i=0 ; i<n_arr ; i++){
        if (k_search==arr[i]){
            printf("Position : %d",i+1);
            return ;
        }
    }

}
void traversal(int arr[], int n_arr){
    int i;
    printf("Array Elements: ");
    for (i=0; i<n_arr ; i++){
        printf("%d  ",arr[i]);
    }

}
