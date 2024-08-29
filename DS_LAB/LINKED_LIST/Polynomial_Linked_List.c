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
    while (choice !=6){
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
    struct node *ptr, *current,*head;
    head=NULL;
    int deg;
    printf("Enter the Degree of the Polynomial: ");
    scanf("%d",&deg);
    for(int i=0;i<=deg;i++){
        current=(struct node *)malloc(sizeof (struct node));
        printf("Enter the coefficient of x^%d ", i);
        scanf("%d", &current->coe);
        current->expo = i;
        current->link=NULL;
        if (head == NULL){
            head = current;
        }
        else{
            ptr->link = current;
        }
        ptr=current;
    }
    return head;
}

struct node * add_Poly(struct node * head1, struct node * head2){
    struct node * ptr1,*ptr2,*current, *head=NULL;
    ptr1=head1;
    ptr2=head2;
    while(ptr1!=NULL &&ptr2!=NULL){
        current=(struct node *)malloc(sizeof (struct node));
        if (ptr1->expo == ptr2->expo){
            current->coe= ptr1-> coe +ptr2-> coe;
            current-> expo = ptr1->expo;
            ptr1= ptr1-> link;
            ptr2=ptr2->link;
        }
        else if (ptr1->expo > ptr2->expo){
            current->coe =ptr1->coe;
            current->expo = ptr1->expo;
            ptr1 = ptr1-> link;
        }
        else{
            current->coe = ptr2->coe;
            current->expo = ptr2->expo;
            ptr2= ptr2->link;
        }
        current->link=NULL;
        if (head == NULL){
            head = current;
        }
        else{
            ptr1->link = current;
        }
        ptr1 = current;
    }
    while(ptr1 != NULL){
        current = (struct node *)malloc(sizeof (struct node));
        current-> coe = ptr1->coe;
        current->expo = ptr1->expo;
        current->link = NULL;
        if (head == NULL){
            head=current;
        }
        else{
            ptr1->link = current;
        }
        ptr1=current;
    }
    while(ptr2!=NULL){
        current=(struct node *)malloc(sizeof (struct node));
        current->coe = ptr2->coe;
        current->expo = ptr2->expo;
        current->link = NULL;
        if (head ==NULL){
            head=current;
        }
        else{
            ptr2->link = current;
        }
        ptr2=current;
    }
    return head;
}

struct node * multiply_Poly(struct node * head1, struct node * head2){
    struct node * ptr1, *ptr2, *current, *head, *temp, *ptr;
    head=NULL;
    ptr1=head1;
    while(ptr1 != NULL){
        ptr2 =head2;
        while(ptr2 != NULL){
            current = (struct node *)malloc(sizeof (struct node));
            current->coe=ptr1->coe * ptr2->coe;
            current->expo=ptr1->expo + ptr2->expo;
            current->link=NULL;
            if (head==NULL){
                head=current;
            }
            else{
                ptr->link=current;
            }
            ptr=current;
            ptr2=ptr2->link;
        }
        ptr1=ptr1->link;
    }
    return head;
}

struct node * subtract_Poly (struct node * head1, struct node * head2){
    struct node * ptr1, *ptr2, *current, *head, *ptr;
    head=NULL;
    ptr1=head1;
    ptr2=head2;
    while(ptr1!=NULL && ptr2!=NULL){
        current=(struct node *)malloc(sizeof (struct node));
        if (ptr1->expo == ptr2->expo){
            current->coe=ptr1->coe - ptr2->coe;
            current->expo =ptr1->expo;
            ptr1 =ptr1->link;
            ptr2= ptr2->link;
        }
        else if (ptr1->expo > ptr2->expo){
            current->coe=ptr1->coe;
            current->expo= ptr1->expo;
            ptr1=ptr1->link;
        }
        else{
            current->coe=ptr2->coe;
            current->expo =ptr2->expo;
            ptr2=ptr2->link;
        }
        current->link=NULL;
        if (head == NULL){
            head=current;
        }
        else{
            ptr->link=current;
        }
        ptr=current;
    }
    while(ptr1!=NULL){
        current=(struct node *)malloc(sizeof (struct node));
        current->coe=ptr1->coe;
        current->expo=ptr1->expo;
        current->link=NULL;
        if (head == NULL){
            head =current;
        }
        else{
            ptr->link=current;
        }
        ptr=current;
        ptr1=ptr1->link;
    }
    while(ptr2 != NULL){
        current=(struct node *)malloc(sizeof (struct node));
        current->coe=ptr2->coe;
        current->expo=ptr2->expo;
        current->link=NULL;
        if (head == NULL){
            head=current;
        }
        else{
            ptr->link=current;
        }
        ptr=current;
        ptr2=ptr2->link;
    }
    return head;
}
void traverse(struct node *head){
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%dX^%d",ptr->coe,ptr->expo);
        if (ptr->link!=NULL){
            printf(" + ");
        }
        ptr=ptr->link;
    }
    printf("\n");
}