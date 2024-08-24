//Reverse a Linked List Using Recurssion. Linked list created using while loop to enter any number of nodes.
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node * Create_Linked_List();
void Display_LL(struct node * head);
struct node * Reverse_Recurssion(struct node * head);

int main(){
    struct node * head;
    printf("--CREATING A LINKED LIST--\n");
    head=Create_Linked_List();
    printf("--Linked List Before Reversing--\n");
    Display_LL(head);
    head=Reverse_Recurssion(head);
    printf("\n--Linked List After Reversing--\n");
    Display_LL(head);
    return 0;
}

struct node * Create_Linked_List(){
    struct node * head,*ptr,*current;
    int value;
    head=NULL;
    ptr=NULL;
    current=NULL;
    printf("Enter the data: ");
    scanf("%d",&value);
    while (value!=-1){
        ptr=(struct node * )malloc(sizeof (struct node));
        ptr->data=value;
        ptr->link=NULL;
        if (head==NULL){
            head=ptr;
        }
        else{
            current->link=ptr;
        }
        current=ptr;
        printf("Enter the data: ");
        scanf("%d",&value);
    }
    return head;
}

struct node * Reverse_Recurssion(struct node * head){
    struct node * ptr;
    ptr=head;
    if (head==NULL || head->link==NULL){
        return head;
    }
    ptr=Reverse_Recurssion(head->link);
    head ->link->link=head;
    head->link = NULL;
    return ptr;    
}

void Display_LL(struct node * head){
    struct node * ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->link;
    }
    printf("NULL\n");
}