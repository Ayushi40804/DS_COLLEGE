// Write a program in C to store n elements in an array and print the elements using a pointer
#include <stdio.h>
int main()
{
    int a,b,n,i,arr[25];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("element - %d",i);
        scanf("%d\n",&arr[i]);
    }

    return 0;
}