//Reverse a linked list using Iterative method. Linked List created using n number of nodes with for loop.
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node * create_Linked_List(int n);
struct node * Reverse_Iterate(struct node * head);
void Display_Linked_List(struct node *head);

int main(){
    int n;
    struct node * head;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    head=create_Linked_List(n);
    printf("--The Linked List Before Reversing--\n");
    Display_Linked_List(head);
    printf("\n--The Linked List After Reversing--\n");
    head=Reverse_Iterate(head);
    Display_Linked_List(head);
    return 0;

}

struct node * create_Linked_List(int n){
    struct node * head=(struct node *)malloc(sizeof (struct node));
    struct node *next;
    struct node * current;
    printf("Enter the data: ");
    scanf("%d",&head->data);
    head->link=NULL;
    current=head;
    for(int i=0; i<n-1;i++){
        struct node * next=(struct node*)malloc(sizeof (struct node));
        current->link=next;
        printf("Enter the data: ");
        scanf("%d",&next->data);
        next->link=NULL;
        current=next;
    }
    return head;
}

void Display_Linked_List(struct node * head){
    struct node * ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d ->",ptr->data);
        ptr=ptr->link;
    }
    printf("NULL");
}

struct node * Reverse_Iterate(struct node * head){
    struct node * next;
    struct node *current;
    struct node * prev;
    current =head;
    prev=NULL;
    while (current!=NULL){
        next=current->link;
        current->link=prev;
        prev=current;
        current=next;
    } 
    return prev;
}