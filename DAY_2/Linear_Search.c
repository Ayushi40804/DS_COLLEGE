#include <stdio.h>
int main()
{
    int arr[10], i,n,x;
    printf("Enter the numbers of elements in array: \n");
    scanf("%d",&n);
    printf("Enter the elements of array: \n");
    for(i=0 ; i<n ; i++){
        scanf("%d" , &arr[i]);
    }
    printf("LINEAR SEARCH\n");
    printf("Enter the element to be searched in the array: \n");
    scanf("%d",&x);
    printf("TEST");
    for (i=0;i<n;i++){
        if (arr[i]==x){
            printf("The element is found at the %d position in the array.",i+1);
            return 0;
        }
    }
    return 1;
}