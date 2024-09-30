//Implementing Queue using Stack Functions
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int stack1[SIZE];
int stack2[SIZE];
int top1=-1;
int top2=-1;

void push1(int data);
int pop1();
void push2(int data);
int pop2();
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

void push1(int data) {
    if (top1 == SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack1[++top1] = data;
}

int pop1() {
    if (top1 == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack1[top1--];
}

void push2(int data) {
    if (top2 == SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack2[++top2] = data;
}

int pop2() {
    if (top2 == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack2[top2--];
}

void enqueue(int data){
    while(top1 !=-1){
        push2(pop1());
    }
    push1(data);
    while(top2 !=-1){
        push1(pop2());
    }
}

void dequeue(){
    pop1();
}

void display() {
    if (top1 == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements are:\n");
    for (int i = 0; i <= top1; i++) {
        printf("%d ", stack1[i]);
    }
    printf("\n");
}