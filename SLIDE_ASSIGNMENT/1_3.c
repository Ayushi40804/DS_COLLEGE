//Write an recursive algorithm to sum the list of numbers
#include <stdio.h>
#include <stdlib.h>
void sum(int *arr,int size, int *list_sum);
int main(){
    int size,*list_sum;
    int final_sum = 0;
    list_sum = &final_sum;

    printf("Enter the size of the array:");
    scanf("%d",&size);
    int *arr = (int *)malloc(size * sizeof(int));
    printf("Enter th numbers of the list: ");
    for (int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    sum(arr,size-1,list_sum);
    printf("%d",final_sum);

    free(arr);
    return 0;
}

void sum (int *arr, int size,int *list_sum){
    if(size>=0){
        *list_sum += arr[size];
        sum (arr,size-1, list_sum);
    }
}