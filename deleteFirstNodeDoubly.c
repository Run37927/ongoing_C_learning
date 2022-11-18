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

struct node * delFirst(struct node *head)
{
    head = head->next;
    free(head->prev);
    head->prev = NULL;

    return head;
}

int main()
{
    struct node *head = NULL;
    struct node *ptr;
    head = addToEmpty(head, 34);
    head = addAtEnd(head, 25);
    head = addAtEnd(head, 13);

    printf("------before deleting first node------\n");
    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    puts("");

    // delete the first node
    head = delFirst(head);

    printf("-----after deleting first node------\n");
    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    puts("");

    return 0;
}