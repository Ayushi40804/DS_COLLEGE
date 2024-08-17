//Write an recursive algorithm to print from 1 to n (where n > 1).
#include <stdio.h>

int print(int n);
int main(){
    int n;

    printf("Enter the value of n(n>1): ");
    scanf("%d", &n);
    print(n);
}

int print(int n){
    if (n==0){
        return 0;
    }
    else{
        printf("%d \n",n);
    }
    print(n-1);
}
