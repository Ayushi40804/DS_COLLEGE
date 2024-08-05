#include <stdio.h>
int isPrime(int n);
int main()
{
    int x, arr[10],i;
    printf("Enter a number: ");
    scanf("%d", &x);
    for (int i = 0; i < x; i++){
        scanf("%d", &arr[i]);
    }
    if (isPrime(arr[i])){
        printf("Prime number");
    }
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