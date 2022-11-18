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

struct node * addAtEnd(struct node *head, int data)
{
    struct node *temp, *tp;

    // create a new node
    temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;

    tp = head; // assign head to tp so tp can traverse and find the penultamate node
    while (tp->next != NULL) {
        tp = tp->next;
    }
    // after the while loop, tp now points at the penultamate node

    // the linking part
    tp->next = temp;
    temp->prev = tp;
    
    return head;
}

struct node * addAfterPosition(struct node *head, int data, int position)
{
    struct node *newP = NULL;
    struct node *temp = head;
    struct node *temp2 = NULL;
    newP = addToEmpty(newP, data);

    while (position != 1) {
        temp = temp->next;
        position--;
    }

    temp2 = temp->next;
    temp->next = newP;
    temp2->prev = newP;
    newP->next = temp2;
    newP->prev = temp;

    return head;
}

int main()
{
    struct node *head = NULL;
    struct node *ptr;

    head = addToEmpty(head, 45); // insert into an empty list
    head = addAtBeginning(head, 34); // insert at beginning of the list
    head = addAtEnd(head, 9);
    head = addAfterPosition(head, 25, 2);

    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}