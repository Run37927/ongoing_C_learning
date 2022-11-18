#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node * addToEmpty(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}

struct node * addAtBeginning(struct node *head, int data)
{
    // receive two arguments: head and data
    // receiving head means receiving the node

    struct node *temp = malloc(sizeof(struct node)); // create a new node
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;

    temp->next = head;
    head->prev = temp;
    head = temp;

    return head;
}

int main()
{
    struct node *head = NULL;
    struct node *ptr;

    head = addToEmpty(head, 45); // insert into an empty list
    head = addAtBeginning(head, 34); // insert at beginning of the list

    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}