#include <stdio.h>
void array(int n);
void binary_search(int arr[], int n);

void array(int n){
    int i, arr[n];
    printf("Enter the elements of array: \n");
    for(i=0 ; i<n ; i++){
        scanf("%d" , &arr[i]);
    }
    binary_search(arr,n);
}

void binary_search(int arr,int n,int x){
    
    if (x<arr[n/2]){
        binary_search(arr[n/2], int n/2)    }
    if(x>arr[n/2]){

    }
    if(x==arr[n/2]){

    }
    else{
        printf("ERROR!");
    }
    return;

}
int main()
{
    
    return 0;
}