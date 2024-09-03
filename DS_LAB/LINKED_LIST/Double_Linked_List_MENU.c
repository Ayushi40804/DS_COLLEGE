//Implementing Double Linked List
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * prev;
    struct node * next;
};
struct node *head;

struct node * create_double_ll(int n);
struct node * insert_at_begning(struct node *head);
struct node * insert_at_end(struct node *head);
void insert(struct node *head);
struct node * delete_at_begning(struct node *head);
void delete_at_end(struct node*head);
struct node * delete(struct node *head);
void traverse(struct node *head);
struct node * reverse(struct node * head);


int main(){
    int choice=0;
    int n;
    
    while(choice!=10){
        printf("----MENU----\n");
        printf("1. Create a linked list\n");
        printf("2. Insert an Element at the begning\n");
        printf("3. Insert an Element at the end\n");
        printf("4. Insert an Element at any choice of place\n");
        printf("5. Delete an element at the begning\n");
        printf("6. Delete an element at the end\n");
        printf("7. Delete an element at any choice of place\n");
        printf("8. Traverse the Linked List\n");
        printf("9. Reverse the Linked List\n");
        printf("10. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("----CREATING A LINKED LIST----\n");
            printf("Enter the number of nodes:");
            scanf("%d",&n);
            head = create_double_ll(n);
            break;
        case 2:
            printf("----INSERT AN ELEMENT AT THE BEGNING OF THE LIST----\n");
            head=insert_at_begning(head);
            break;
        case 3:
            printf("----INSERT AN ELEMENT AT THE END OF THE LINKED LIST----\n");
            insert_at_end(head);
            break;
        case 4:
            printf("----INSERTING AN ELEMENT----\n");
            insert(head);
            break;
        case 5:
            printf("----DELETING AN ELEMENT AT THE BEGNING----\n");
            head=delete_at_begning(head);
            break;
        case 6:
            printf("----DELETING AN ELEMENT AT THE END----\n");
            delete_at_end(head);
            break;
        case 7:
            printf("----DELETING AN ELEMENT----\n");
            delete(head);
            break;
        case 8:
            printf("The Linked List is:\n");
            traverse(head);
            break;
        case 9:
            printf("----REVERSE THE LINKED LIST----\n");
            head=reverse(head);
            break;
        case 10:
            break;
        default:
            break;
        }
    }
    return 0;
}

struct node * create_double_ll(int n){
    struct node *head;
    return head;
}

struct node * insert_at_begning(struct node *head){
    struct node *ptr=(struct node *)malloc(sizeof (struct node));
    printf("Enter the data: ");
    scanf("%d",&ptr->data);
    ptr->next=head;
    head->prev=ptr;
    return ptr;
}

struct node * insert_at_end(struct node *head){}
void insert(struct node *head){}
struct node * delete_at_begning(struct node *head){}
void delete_at_end(struct node* head){}
struct node * delete(struct node *head){}

void traverse(struct node *head){
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d->\t", ptr->next);
        ptr=ptr->next;
    }
    printf("NULL");
}

struct node * reverse(struct node * head){
    struct node *ptr, *current;
    while(ptr!=NULL){
        ptr=current->next;
        current=current->prev;

    }
}