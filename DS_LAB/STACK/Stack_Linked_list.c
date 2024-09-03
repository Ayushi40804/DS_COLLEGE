//Stack Implementation Using Linked List
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node * Create_Stack();
struct node *Push(struct node * head, int value);
struct node * Pop();
void Display(struct node * head);
int Stack_Overflow();
int Stack_Underflow();

int main(){
    struct node * head, *ptr;
    head=NULL;
    ptr=head;
    int data;
    printf("\nCreating Stack\n");
    printf("Enter -1 to end\n");
    printf("Enter the data: ");
    scanf("%d",&data);
    while(data!=-1){
        printf("Enter the data:");
        scanf("%d",&data);
        Push(head,data);
    }

    printf("The Created Stack is:\n");
    Display(head);
    printf("\nTEST!!\n");
    return 0;
}

struct node *Push(struct node * head, int value){
    struct node *current=(struct node *)malloc(sizeof (struct node));
    current->data=value;
    current->link=head;
    head=current;
    return head;
}
struct node * Pop(){}
void Display(struct node * head){
    struct node * ptr;
    ptr=head;
    while(ptr->link!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
}
int Stack_Overflow(){}
int Stack_Underflow(){}