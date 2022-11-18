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

struct node * createDoublyList(struct node *head)
{
    int n, data, i;
    printf("enter the number of nodes: ");
    scanf("%d", &n);

    if (n == 0)
        return head;

    // add the very first node in the list
    printf("enter the element for the node 1: ");
    scanf("%d", &data);
    head = addToEmpty(head, data);

    for (i=1; i<n; i++) {
        printf("enter the element for node %d: ", i+1);
        scanf("%d", &data);
        head = addAtEnd(head, data);
    }
    return head;
}

int main()
{
    struct node *head = NULL;
    struct node *ptr;
    head = createDoublyList(head);

    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}