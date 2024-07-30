//Write a program to create an array of n elements using dynamic memory allocation. Calculate sum of
//all the prime elements of the array using function and de-allocate the memory of the array after its use.
#include <stdio.h>
#include <stdlib.h>
int SumOfPrimes(int *arr, int n);
int isPrime(int n);
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int sum = SumOfPrimes(arr, n);
    printf("Sum of prime elements: %d\n", sum);
    free(arr);
    return 0;
}

int isPrime(int n){
    if (n <= 1){
        return 0; //False
    }
    for (int i = 2; i<= n; i++){
        if (n % i == 0){
            printf("TEST");
            return 0; //False
        }
    }
    return 1; //True
}

int SumOfPrimes(int *arr, int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        if (isPrime(arr[i])){
            sum += arr[i];
        }
    }
    return sum;
}
