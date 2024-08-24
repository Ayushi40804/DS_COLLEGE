//Remove Even Nodes from a Linked list
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node * create_ll();

int main(){

    create_ll();
}

struct node * create_ll(){
    struct node * head=(struct node *)malloc(sizeof (struct node));
    struct node * ptr=(struct node *)malloc(sizeof (struct node));
    struct node * current=(struct node *)malloc(sizeof (struct node));
    printf("Enter the data: ");
    scanf("%d",&head->data);
    ptr=head;
    while (current->data != -1){
        struct node * current=(struct node*)malloc(sizeof (struct node));
        printf("\nEnter the data:");
        scanf("%d",&current->data);
        current;
    }    
}