// sparse matrix multiplication in three tuple format
#include <stdio.h>
#include <stdlib.h>
void readmatrix(int **arr, int r, int c);
void printmatrix(int **arr,int r, int c);
void sparse(int **arr1, int **arr2, int r1, int c1, int r2, int c2);
int main(){
    int i,j,r1,c1,r2,c2;
    printf("Enter the size of the matrix row and column:");
    scanf("%d",&r1);
    scanf("%d",&c1);
    int **arr1 = (int **)malloc(r1*sizeof(int*));
    for (i=0 ; i<c1 ; i++){
        arr1[i] = (int *)malloc(c1*sizeof(int));
    }
    readmatrix(arr1,r1,c1);
    printf("Enter the size of the matrix row and column:");
    scanf("%d",&r2);
    scanf("%d",&c2);
    int **arr2 = (int **)malloc(r2*sizeof(int*));
    for (i=0 ; i<c2 ; i++){
        arr2[i] = (int *)malloc(c2*sizeof(int));
    }
    readmatrix(arr2,r2,c2);
    sparse(arr1,arr2,r1,c1,r2,c2);
}

void readmatrix(int **arr, int r, int c){
    int i,j;
    printf("Enter the elements of the matrix");
    for(i=0;i<r;i++){
        for (j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
}

void printmatrix(int **arr,int r, int c){
    int count=0,i,j;
    
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            if(arr[i][j]!=0){
                count++;
                
            }
        }
    }
    printf("printing the sparse matrix in the 3-tuple format\n");
    printf("ROW\tCOLUMN\tELEMENT\n");
    printf("%d\t%d\t%d\n",r,c,count);

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(arr[i][j]!=0){
                printf("%d\t%d\t%d\n",i,j,arr[i][j]);
            }
        }
    }
}

void sparse(int **arr1, int **arr2, int r1, int c1, int r2, int c2){
    int i,j,k;
    int **arr3 = (int **)malloc(r1*sizeof(int*));
    for (i=0 ; i<c1 ; i++){
        arr3[i] = (int *)malloc(c1*sizeof(int));
    }
    for (i=0;i<r1;i++){
        for (j=0;j<c2;j++){
            arr3[i][j]=0;
        }
    }
    for (i=0;i<r1;i++){
        for (j=0;j<c2;j++){
            for (k=0;k<c1;k++){
                arr3[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }
    printmatrix(arr3,r1,c2);
}