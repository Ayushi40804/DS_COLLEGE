//Creating a linked list
#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *link;
};

int main(){
  struct node *head=(struct node*)malloc(sizeof (struct node));
  head->data=30;
  head->link=NULL;
  

  struct node *current= (struct node *)malloc(sizeof (struct node));
  current->data=20;
  current->link=NULL;
  head->link=current;


  current= (struct node *)malloc(sizeof (struct node));
  current->data=10;
  current->link=NULL;
  head->link->link=current;

  printf("%d\t",head->data);
  printf("%d\t",head->link);
  printf("%d\t",head->link->data);
  printf("%d\t",head->link->link);
  printf("%d\t",current->data);
  printf("%d\t",current->link);

  int count = 0;
  if (head==NULL){
    printf("List is empty");
  }
  struct node *ptr=NULL;
  ptr=head;
  while (ptr!=NULL){
    count++;
    ptr=ptr->link;
  }
  printf("\n%d", count);
}