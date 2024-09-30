#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// Function prototypes
struct node *Create_Stack();
struct node *Push(struct node *head, int value);
struct node *Pop(struct node *head);
void Display(struct node *head);

int main() {
    struct node *head = NULL;
    int data;

    printf("\nCreating Stack\n");
    printf("Enter -1 to end\n");

    // Enter data and push onto the stack
    while (1) {
        printf("Enter the data: ");
        scanf("%d", &data);
        if (data == -1)
            break;
        head = Push(head, data); // Update head with the new stack top
    }

    printf("The Created Stack is:\n");
    Display(head);

    // Test pop operation
    printf("\nPopping from Stack:\n");
    head = Pop(head); // Pop an element
    Display(head);    // Display after popping

    return 0;
}

// Push function to add an element to the stack
struct node *Push(struct node *head, int value) {
    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = value;
    current->link = head;
    head = current;
    return head;
}

// Pop function to remove an element from the stack
struct node *Pop(struct node *head) {
    struct node *temp;
    if (head == NULL) {
        printf("Stack is Empty\n");
        return head;
    }
    temp = head;
    head = head->link;
    free(temp);
    return head;
}

// Function to display the stack
void Display(struct node *head) {
    struct node *ptr = head;
    if (head == NULL) {
        printf("Stack is Empty\n");
        return;
    }
    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}

// Function to create an empty stack (returns NULL)
struct node *Create_Stack() {
    return NULL;
}