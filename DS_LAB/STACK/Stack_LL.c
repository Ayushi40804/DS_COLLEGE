//Stack implementation using linked list
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node * push( struct node *head, int data);
struct node *pop(struct node * head);
void display(struct node *head);

int main(){
    struct node *head=NULL;
    int data;

    printf("Enter the data: ");
    scanf("%d", &data);
    while (data != -1){
        head = push(head,data);
        printf("Enter the data: ");
        scanf("%d", &data);
    }
    display(head);
    printf("\nAfter pop\n");
    head=pop(head);
    display(head);
    return 0;
}

struct node * push(struct node * head, int data){
    struct node * current=(struct node *)malloc(sizeof (struct node));
    current->data =data;
    current->link =head;
    head =current;
    return head;
}

void display(struct node *head){
    struct node *ptr;
    ptr =head;
    while (ptr != NULL){
        printf("%d\n",ptr->data);
        ptr= ptr->link;
    }
}

struct node *pop(struct node *head){
    struct node *ptr;
    ptr =head;
    head =head->link;
    free(ptr);
    return head;
}