#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};
struct node *front=NULL;
struct node *rear=NULL;

void enqueue(int data);
void dequeue();
void display();

int main(){
    int choice=0;
    int data;
    while(choice!=4){
        printf("----MENU----\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data: ");
            scanf("%d",&data);
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            break;
        }
    }
    return 0;
}

void enqueue(int data){
    struct node *ptr=(struct node *)malloc(sizeof (struct node));
    ptr->data=data;
    ptr->next=NULL;
    if(front==NULL && rear==NULL){
        front=rear=ptr;
    }
    else{
        rear->next=ptr;
        rear=ptr;
    }
}

void dequeue(){
    if(front==NULL && rear==NULL){
        printf("Queue is empty\n");
    }
    else if(front==rear){
        front=rear=NULL;
    }
    else{
        struct node *temp=front;
        front=front->next;
        free(temp);
    }
}

void display(){
    if(front==NULL && rear==NULL){
        printf("Queue is empty\n");
    }
    else{
        struct node *ptr=front;
        while(ptr!=NULL){
            printf("%d->\t",ptr->data);
            ptr=ptr->next;
        }
        printf("NULL\n");
    }
}