//Write a program to read two numbers and compare the numbers using function call by address.
#include <stdio.h>
void Compare(int *x, int *y);
int main(){
    int x , y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    Compare(&x, &y);
    return 0;
}

void Compare(int *x, int *y){
    if (*x > *y){
        printf("%d is greater than %d", *x , *y);
    }
    else if (*x < *y){
        printf("%d is smaller than %d", *x , *y);
    }
    else if(*x == *y){
        printf("%d is equal to %d.", *x , *y);
    }
    else
        printf("ERROR!");
}

