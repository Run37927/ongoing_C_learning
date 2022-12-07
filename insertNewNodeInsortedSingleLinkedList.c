#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node * insertAtBegin(struct node *head, int data) 
{
    struct node *ptr =  (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL; // why the extra step??

    ptr->link = head;
    head = ptr;
    return head;
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

struct node * insert(struct node *head, int data) {
    struct node * temp;
    struct node *newP = malloc(sizeof(struct node));
    newP->data = data;
    newP->link = NULL;

    int key = data;
    // if we have to insert at the beginning
    if (head == NULL || key < head->data) {
        newP->link = head;
        head = newP;
    } else {
        temp = head;
        while (temp->link != NULL && temp->link->data < key) {
            temp = temp->link; // keep traversing until data is bigger than key
        }
        newP->link = temp->link;
        temp->link = newP;
    }

    return head;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));// create the first node, head is pointing to it
    head->data = 45; // put data in first node
    head->link = NULL;

    insertAtEnd(head, 56);
    insertAtEnd(head, 78);
    insertAtEnd(head, 100);

    head = insert(head, 88);

    // print out result
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}
