#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *link;
};

void printData(struct node *head)
{
    if (head == NULL)
        printf("linked list is empty");
    
    struct node *ptr = NULL;
    ptr = head;

    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

void insertAtEnd(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node)); // create a new node

    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}


int main() 
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;

    head->link->link = current;

    insertAtEnd(head, 67);
    printData(head);
    return 0;
}