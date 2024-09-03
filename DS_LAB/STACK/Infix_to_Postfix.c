#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

char stack[SIZE];
int top=-1;

void push(char data);
char pop();
int precedence(char ch);
void infix_to_postfix(char *exp);

int main(){
    char exp[SIZE];
    printf("Enter the infix expression: ");
    gets(exp);
    infix_to_postfix(exp);
    return 0;
}

void push(char data){
    if(top==SIZE-1){
        printf("Stack is full\n");
    }
    else{
        stack[++top]=data;
    }
}

char pop(){
    if(top==-1){
        printf("Stack is empty\n");
        return -1;
    }
    else{
        return stack[top--];
    }
}

int precedence(char ch){
    if(ch=='^'){
        return 3;
    }
    else if(ch=='*' || ch=='/'){
        return 2;
    }
    else if(ch=='+' || ch=='-'){
        return 1;
    }
    else{
        return 0;
    }
}

void infix_to_postfix(char *exp){
    int i;
    char postfix[SIZE];
    int j=0;
    for(i=0;i<strlen(exp);i++){
        if((exp[i]>='a' && exp[i]<='z') || (exp[i]>='A' && exp[i]<='Z')){
            postfix[j++]=exp[i];
        }
        else if(exp[i]=='^'){
            push(exp[i]);
        }
        else if(exp[i]=='+' || exp[i]=='-' || exp[i]=='*' || exp[i]=='/'){
            while(top!=-1 && precedence(stack[top])>=precedence(exp[i])){
                postfix[j++]=pop();
            }
            push(exp[i]);
        }
        else if(exp[i]=='('){
            push(exp[i]);
        }
        else if(exp[i]==')'){
            while(stack[top]!='('){
                postfix[j++]=pop();
            }
            pop();
        }
        else{
            while(top!=-1 && precedence(stack[top])>=precedence(exp[i])){
                postfix[j++]=pop();
            }
            push(exp[i]);
        }
    }
    while(top!=-1){
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    printf("The postfix expression is: %s\n",postfix);
}
