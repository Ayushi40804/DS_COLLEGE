//NOT COMPLETE
//Write an recursive algorithm to find the kth smallest element of a set S.
#include <stdio.h>

int k_small_element(int *arr, int size, int k);

int main(){
    int size,k;

    printf("Enter the size of the array:");
    scanf("%d",&size);
    int *arr = (int*)malloc(size* sizeof (int));
    printf("Enter the elements of hte array: \n");
    for (int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);
    k_small_element(&arr,size,k);
    free(arr);
    return 0;

}
int k_small_element(int *arr,int size, int k){
    int *temp_min;
    temp_min=arr;
    for (int i=0; i<size;i++){
        if (temp_min>arr[i]){
            temp_min=arr;
        }
        k_small_element(arr,size,k);
    }
    if(k==0){
        printf("%d",temp_min);
    }
    k-=1;
    k_small_element(arr)
}