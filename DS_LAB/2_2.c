#include <stdio.h>
#include <stdlib.h>

void nonzero (int* arr[], int n);
void uppertriangular (int* arr[], int n);
void besides_diagonal (int* arr[], int n);

int main(){
    int i,j,n;
    printf("Enter the size of the square matrix: ");
    scanf("%d",&n);
    int **arr = (int**)malloc(n * sizeof (int*));
    for(i=0 ; i<n ;i++){
        arr[i]=(int*)malloc(i * sizeof (int));
    }

    printf ("Enter elements of matrix: ");
    for(i=0;i<n;i++){
        for (j=0 ; j<n ; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The matrix is: \n");
    for(i=0;i<n;i++){
        for (j=0 ; j<n ; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    } 
}

void nonzero(int* arr[], int n ){
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
            if (i>j){
                printf("The element at (%d,%d) is %d\n", i , j , arr[i][j]);
            }
        }
    }
}
void besides_diagonal (int* arr[], int n){
    int i ,j;
    for(i=0;i<n;i++){
        for (j=0 ; j<n ; j++){
            if (i!=j){
                printf("The element at (%d,%d) is %d\n",i,j,arr[i][j]);
            }
        }
    }
}