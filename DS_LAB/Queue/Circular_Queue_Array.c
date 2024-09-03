#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int queue[SIZE];
int front=-1;
int rear=-1;

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
    if((rear+1)%SIZE==front){
        printf("Queue is full\n");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=data;
    }
    else{
        rear=(rear+1)%SIZE;
        queue[rear]=data;
    }
}

void dequeue(){
    if(front==-1 && rear==-1){
        printf("Queue is empty\n");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        front=(front+1)%SIZE;
    }
}

void display(){
    if(front==-1 && rear==-1){
        printf("Queue is empty\n");
    }
    else{
        int i=front;
        while(i!=rear){
            printf("%d->\t",queue[i]);
            i=(i+1)%SIZE;
        }
        printf("%d\n",queue[rear]);
    }
}