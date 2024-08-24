//Menu Driven Program to Perform Operations on Polynomials using Linked List
#include <stdio.h>
#include <stdlib.h>

struct node{
    int coe;
    int expo;
    struct node * link;
};

struct node * Create_ll();
struct node * add_Poly(struct node * head1, struct node * head2);
struct node * multiply_Poly(struct node * head1, struct node * head2);
struct node * subtract_Poly (struct node * head1, struct node * head2);
void traverse(struct node *head);

int main(){
    struct node * head1, *head2, *result_head;
    int choice;
    while (choice!=5){
        printf("--Polynomial Menu--\n");
        printf("1. Enter Polynomial for Operations\n");
        printf("2. Add Two Polynomials\n");
        printf("3. Subtract Two Polynomials\n");
        printf("4. Multiplication Of Two Polynomial\n");
        printf("5. Traverse\n");
        printf("6. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter Polynomial 1\n");
            head1=Create_ll();
            printf("Enter Polynomial 2\n");
            head2=Create_ll();
            break;
        case 2:
            printf("Addition\n");
            printf("Polynomial 1\n");
            traverse(head1);
            printf("Polynomial 2\n");
            traverse(head2);
            result_head=add_Poly(head1, head2);
            printf("The resultant Polynomial is: \n");
            traverse(result_head);
            break;
        case 3:
            printf("Subtraction\n");
            printf("Polynomial 1\n");
            traverse(head1);
            printf("Polynomial 2\n");
            traverse(head2);
            result_head=subtract_Poly(head1, head2);
            printf("The Resultant Polynomial is: \n");
            traverse(result_head);
            break;
        case 4:
            printf("Multiplication\n");
            printf("Polynomial 1\n");
            traverse(head1);
            printf("Polynomial 2\n");
            traverse(head2);
            result_head=multiply_Poly(head1,head2);
            printf("The Resultant Polynomial is: \n");
            traverse(result_head);
            break;
        case 5:
            printf("The Polynomial 1 is :");
            traverse(head1);
            printf("The Polynomial 2 is :");
            traverse(head2);
            break;
        case 6:
            break;
        default:
            break;
        }
    }
    return 0;
}

struct node * Create_ll(){
    struct node * ptr, *current,*head=NULL;
    int deg;
    printf("Enter the Degree of the Polynomial: ");
    scanf("%d",&deg);
    for(int i=head->expo;i>0;i--){
        current=(struct node *)malloc(sizeof (struct node));
        printf("Enter the coefficient of x^%d",i);
        scanf("%d",&current->coe);
        current->expo=i;
        current->link=NULL;
        if (head==NULL){
            head=current;
        }
        else{
            ptr->link=current;
        }
        ptr=current;
    }
    return head;
}

struct node * add_Poly(struct node * head1, struct node * head2){}

struct node * multiply_Poly(struct node * head1, struct node * head2){}

struct node * subtract_Poly (struct node * head1, struct node * head2){}
void traverse(struct node *head){
    struct node *ptr;
    ptr=head;
    for(ptr=head;ptr!=NULL;ptr=ptr->link){
        printf("%d X^%d",ptr->coe,ptr->expo);
        if (ptr->link!=NULL){
            printf("+ ");
        }
    }
    printf("\n");
}