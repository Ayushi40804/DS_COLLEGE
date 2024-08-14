#include <stdio.h>
#include <stdlib.h>

void nonzero (int* arr[], int n);
void uppertriangular (int* arr[], int n);
void besides_diagonal (int* arr[], int n);

int main(){
    int n , i , j,x;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    int **arr = (int **)malloc(n*sizeof(int*));
    for (i=0 ; i<n ; i++){
        arr[i] = (int *)malloc(n*sizeof(int));
    }
    printf("Enter the elements of the matrix: ");
    for (i=0 ; i<n ; i++){
        for (j=0 ; j<n ; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    //menu withwhile
    while (x!=4){
        printf("\nMENU\n");
        printf("1. Non Zero Elements\n");
        printf("2. Upper Triangular Elements\n");
        printf("3. Elements besides Diagonal\n");
        printf("4. Exit\n");
        printf("Enter option: ");
        scanf("%d", &x);
        if (x==1){
            nonzero(arr,n);
        }
        if (x==2){
            uppertriangular(arr,n);
        }
        if (x==3){
            besides_diagonal(arr,n);
        }
        if (x==4){
            for (i=0 ; i<n ; i++){
                free(arr[i]);
            }
            free(arr);
            return 0;
        }
    }
}
void nonzero (int* arr[], int n){
    int i ,j;
    for ( i=0 ; i< n ; i++ ){
        for ( j=0 ; j<n ; j++){
            if( arr[i][j] !=0 ){
                printf ("The element at (%d,%d) is %d\n" , i, j, arr[i][j] );
            }
        }
    }
}

void uppertriangular (int* arr[], int n){
    int i , j;
    for( i = 0; i <n;i++){
        for (j=0 ; j<n ; j++){
            if (i<j){
                printf("The element at (%d,%d) is %d\n", i , j , arr[i][j]);
            }
        }
    }
}
void besides_diagonal (int* arr[], int n){
    int i , j;
    for (i=0 ; i<n ; i++){
        for (j=0 ; j<n ; j++){
            if (i==j+1 || i==j-1){
                printf("The element at (%d,%d) is %d\n", i , j , arr[i][j]);
            }
        }
    }
}