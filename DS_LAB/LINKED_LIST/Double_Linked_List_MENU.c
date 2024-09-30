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
struct node * insert_at_beginning(struct node *head);
void insert_at_end(struct node *head);
void insert(struct node *head, int position, int data);
struct node *delete_at_begning(struct node *head);
void delete_at_end(struct node*head);
void delete(struct node *head, int data);
void traverse(struct node *head);
struct node * reverse(struct node * head);


int main(){
    int choice=0;
    int n, position, data;
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
            head=insert_at_beginning(head)
;
            break;
        case 3:
            printf("----INSERT AN ELEMENT AT THE END OF THE LINKED LIST----\n");
            insert_at_end(head);
            break;
        case 4:
            printf("----INSERTING AN ELEMENT----\n");
            printf("Enter the position and data:");
            scanf("%d %d", &position, &data);
            insert(head, position, data);
            break;
        case 5:
            printf("----DELETING AN ELEMENT AT THE BEGNING----\n");
            head = insert_at_beginning(head);

            break;
        case 6:
            printf("----DELETING AN ELEMENT AT THE END----\n");
            delete_at_end(head);
            break;
        case 7:
            printf("----DELETING AN ELEMENT----\n");
            printf("Enter the data to delete: ");
            scanf("%d",&data);
            delete(head, data);
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
    struct node *ptr, *temp;
    int data;
    head=(struct node *)malloc(sizeof(struct node));
    if(head==NULL){
        printf("Memory not allocated\n");
        return 0;
    }
    else{
        printf("Enter the data of node 1: ");
        scanf("%d",&data);
        head->data=data;
        head->prev=NULL;
        head->next=NULL;
        temp=head;
        for(int i=2;i<=n;i++){
            ptr=(struct node *)malloc(sizeof(struct node));
            if(ptr==NULL){
                printf("Memory not allocated\n");
                return 0;
            }
            else{
                printf("Enter the data of node %d: ",i);
                scanf("%d",&data);
                ptr->data=data;
                ptr->prev=temp;
                ptr->next=NULL;
                temp->next=ptr;
                temp=temp->next;
            }
        }
    }
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

void insert_at_end(struct node *head){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *temp;
    printf("Enter the data: ");
    scanf("%d",&ptr->data);
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->prev=temp;
    ptr->next=NULL;
}
void insert(struct node *head, int position, int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *temp;
    int i;
    ptr->data=data;
    temp=head;
    for(i=2;i<=position-1;i++){
        temp=temp->next;
        if(temp==NULL){
            printf("There are less than %d elements\n",position);
            return;
        }
    }
    ptr->next=temp->next;
    ptr->prev=temp;
    if(temp->next!=NULL){
        temp->next->prev=ptr;
    }
    temp->next=ptr;
}

struct node * insert_at_beginning(struct node *head){

    struct node* temp;

    // Check if the list is empty
    if (head == NULL) {
        printf("The Linked List is empty\n");
        return head;
    }

    temp = head;      // Store the current head node
    head = head->next; // Move head to the next node

    // If the new head is not NULL, update its 'prev' pointer to NULL
    if (head != NULL) {
        head->prev = NULL;
    }

    free(temp); // Free the memory of the old head node
    printf("Element deleted from the beginning\n");

    return head; // Return the new head
}

void delete_at_end(struct node* head){
    struct node *ptr;
    ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->prev->next=NULL;
    free(ptr);
}
void delete(struct node *head, int data){
    struct node *ptr;
    ptr=head;
    while(ptr->data!=data){
        ptr=ptr->next;
        if(ptr==NULL){
            printf("Element not found\n");
            return;
        }
    }
    ptr->prev->next=ptr->next;
    ptr->next->prev=ptr->prev;
    free(ptr);
}

void traverse(struct node * head) {
    struct node* temp = head;
    if (temp == NULL) {
        printf("The Linked List is empty\n");
        return;
    }
    printf("The Linked List is:\n");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

struct node * reverse(struct node * head){
    struct node* temp = NULL;
    struct node* current = head;
    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != NULL) {
        head = temp->prev;
    }

    return head;
}