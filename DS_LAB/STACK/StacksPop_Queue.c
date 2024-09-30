//Implementing Stacks using Queue Functions
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int queue[SIZE];
int front=-1;
int rear=-1;

void enqueue(int data);
int dequeue();
int push(int data); 
void pop();
void display();

int main(){
    int choice=0;
    int data;
    while(choice!=4){
        printf("----MENU----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data: ");
            scanf("%d",&data);
            push(data);
            break;
        case 2:
            pop(data);
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
    if(rear==SIZE-1){
        printf("Queue is full\n");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=data;
    }
    else{
        queue[++rear]=data;
    }
}

int dequeue(){
    if(front==-1 && rear==-1){
        printf("Queue is empty\n");
        return -1;
    }
    else if(front==rear){
        int data=queue[front];
        front=rear=-1;
        return data;
    }
    else{
        return queue[front++];
    }
}

void pop(int data){
    dequeue(data);
}

int push(int data){
    if(front==-1 && rear==-1){
        printf("Stack is empty\n");
        return -1;
    }
    else{
        int data;
        while(front!=rear){
            enqueue(dequeue());
        }
        data=dequeue();
        return data;
    }
}

void display(){
    if(front==-1 && rear==-1){
        printf("Stack is empty\n");
    }
    else{
        int i;
        for(i=front;i<=rear;i++){
            printf("%d->\t",queue[i]);
        }
        printf("NULL\n");
    }
}