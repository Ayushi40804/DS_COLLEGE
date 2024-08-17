#include <stdio.h>
#include <stdlib.h>

void readmatrix(int **arr, int r, int c);
void printmatrix(int **arr,int r, int c);

int main(){
    int i,j,r,c;
    printf("Enter the size of the matrix row and column:");
    scanf("%d",&r);
    scanf("%d",&c);

    int **arr = (int **)malloc(r*sizeof(int*));
    for (i=0 ; i<c ; i++){
        arr[i] = (int *)malloc(c*sizeof(int));
    }
    readmatrix(arr,r,c);
    printmatrix(arr,r,c);

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