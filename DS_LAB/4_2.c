//create a link list and traverse it 
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next; //self referencial structure
};

struct node *start=NULL; //initialize the start pointer to null

struct node * create_ll(struct node *);
struct node * display(struct node *);

int main()
{    
    int num;
    struct node *new_node;
    printf("\n Enter the number of node to be put inside the linked list");
    printf("\n Enter the data :");
    scanf("%d",&num);

    while (num!=-1){
        new_node = (struct node *) malloc (sizeof(struct node));
        new_node->data = num;
        if(start==NULL){
            new_node->next=NULL;
            start=new_node;
        }
        else{
            new_node->next=start;
            start=new_node;
        }
        printf("\n Enter the data :");
        scanf("%d",&num);
    }
    start = display(start);
    return 0;
}

struct node * create_ll(struct node *start){
    struct node *new_node,*ptr;
    int num;
    while(num != -1){
        new_node=(struct node *)malloc(sizeof(struct node));
        new_node->data=num;
        if(start==NULL){
            new_node->next=NULL;
            start=new_node;
        }
        else{
            ptr=start;
            while(ptr->next != NULL)
                ptr=ptr->next;
            ptr->next=new_node;
            new_node->next=NULL;
        }
        printf("\n Enter the data :");
        scanf("%d",&num);
    }
    return start;
}

struct node * display(struct node *start){
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL){
        printf("\t %d",ptr->data);
        ptr=ptr->next;
    }
    return start;
}