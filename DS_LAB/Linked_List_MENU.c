//Menu Driven Linkd List Program
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};
struct node *head=NULL;

struct node * create_ll(int n);
struct node * insert_at_begning(struct node *head);
struct node * insert_at_end(struct node *head);
void insert(struct node *);
struct node * delete_at_begning(struct node *);
struct node * delete_at_end(struct node*);
void delete(struct node *head);
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
            head = create_ll(n);
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
            printf("----DELETING AN ELEMENT AT THE BEGNING----");
            head=delete_at_begning(head);
            break;
        case 6:
            printf("----DELETING AN ELEMENT AT THE END----");
            delete_at_end(head);
            break;
        case 7:
            printf("----DELETING AN ELEMENT----");
            delete(head);
            break;
        case 8:
            printf("The Linked List is:\n");
            traverse(head);
            break;
        case 9:
            printf("----REVERSE THE LINKED LIST----");
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

struct node * create_ll(int n){
    struct node *head=NULL;
    struct node *current=NULL;
    struct node *ptr=NULL;
    for (int i=0; i<n ; i++){
        struct node *current=(struct node *)malloc(sizeof (struct node));
        printf("Enter the data: ");
        scanf("%d", &(current->data));
        current->link=NULL;
        if (head==NULL){
            head = current; //if list is empty then this node becomes first node
        }
        else{
            ptr=head;
            while(ptr->link!=NULL){
                ptr=ptr->link;
            }
            ptr->link=current;
        }
    }
    return head;
}

void traverse(struct node *head){
    struct node *ptr=head;
    while (ptr!=NULL){
        printf("%d ->\t", ptr->data);
        ptr=ptr->link;
    }
    printf("\n");
}

struct node * insert_at_end(struct node *head){
    struct node *ptr=head;
    struct node *temp=(struct node *)malloc(sizeof (struct node));
    printf("Enter the element to insert: ");
    scanf("%d",&temp->data);
    temp->link=NULL;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;
}
struct node * insert_at_begning(struct node *head){
    struct node *temp=(struct node *)malloc(sizeof (struct node));
    struct node *ptr=head;
    printf("Enter the element to insert: ");
    scanf("%d",&temp->data);
    temp->link=head;
    head=temp;
    return head;
}

void insert(struct node *head){
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    struct node *ptr=head;
    int position;
    printf("Enter the element:");
    scanf("%d", &temp->data);
    temp->link=NULL;
    printf("Enter the position to insert the node: ");
    scanf("%d", &position);
    while(position!=2){
        ptr=ptr->link;
        position--;
    }
    temp->link=ptr->link;
    ptr->link=temp;
}

struct node * delete_at_begning(struct node *head){
    struct node *ptr=NULL;
    ptr=head;
    head=ptr->link;
    return head;
}
struct node * delete_at_end(struct node*head){
    
}
struct node * delete(struct node *head){}
struct node * reverse(struct node *head){}