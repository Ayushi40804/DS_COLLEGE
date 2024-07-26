//Liner Search compares the element to be searched with each element of the array one by one.
//No of elements is equal to the no of steps required to solve the problem.
#include <stdio.h>
void array(int n);
void linear_search(int arr[], int n);
void array(int n){
    int i, arr[n];
    printf("Enter the elements of array: \n");
    for(i=0 ; i<n ; i++){
        scanf("%d" , &arr[i]);
    }
    linear_search(arr,n);
}

void linear_search(int arr[], int n){
    int i,x;
    printf("LINEAR SEARCH\n");
    printf("Enter the element to be searched in the array: \n");
    scanf("%d",&x);
    //printf("TEST");
    for (i=0;i<n;i++){
        if (arr[i]==x){
            printf("The element is found at the %d position in the array.",i+1);
            return;
        }
    }
    return;
}
    
int main()
{
    int n;
    printf("Enter the numbers of elements in array: \n");
    scanf("%d",&n);
    array(n);
}