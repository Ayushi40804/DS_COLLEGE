#include <stdio.h>

int Create_Array();
int Print_Array();
int main (){

}
 
int Create_Array(){
    int size;

    printf("Enter the siza of the array:");
    scanf("%d",&size);
    int *arr = (int)malloc(size* sizeof (int));
    printf("Enter the elements of hte array: \n");
    for (int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    return arr;
}

int Print_Array(){
    int i
}

