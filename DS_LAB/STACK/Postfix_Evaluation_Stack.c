#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

int stack[SIZE];
int top=-1;

void push(int data);
int pop();
int evaluate_postfix(char *exp);

int main(){
    char exp[SIZE];
    printf("Enter the postfix expression: ");
    gets(exp);
    int result=evaluate_postfix(exp);
    printf("The result is: %d\n",result);
    return 0;
}

void push(int data){
    if(top==SIZE-1){
        printf("Stack is full\n");
    }
    else{
        stack[++top]=data;
    }
}

int pop(){
    if(top==-1){
        printf("Stack is empty\n");
        return -1;
    }
    else{
        return stack[top--];
    }
}

int evaluate_postfix(char *exp){
    int i;
    int op1,op2;
    for(i=0;i<strlen(exp);i++){
        if(isdigit(exp[i])){
            push(exp[i]-'0');
        }
        else{
            op2=pop();
            op1=pop();
            switch (exp[i])
            {
            case '+':
                push(op1+op2);
                break;
            case '-':
                push(op1-op2);
                break;
            case '*':
                push(op1*op2);
                break;
            case '/':
                push(op1/op2);
                break;
            case '%':
                push(op1%op2);
                break;
            default:
                break;
            }
        }
    }
    return pop();
}