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

struct node * reverseEntireList(struct node *head)
{
    struct node *ptr1 = head;
    struct node *ptr2 = ptr1->next;

    ptr1->next = NULL;
    ptr1->prev = ptr2;

    while (ptr2 != NULL) {
        ptr2->prev = ptr2->next;
        ptr2->next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr2->prev;
    }

    head = ptr1;
    return head;
}

int main()
{
    struct node *head = NULL;
    struct node *ptr;
    head = addToEmpty(head, 34);
    head = addAtEnd(head, 25);
    head = addAtEnd(head, 13);
    head = addAtEnd(head, 8);

    // before
    // 34 🔁 25 🔁 13 🔁 8
    // after
    // 8 🔁 13 🔁 25 🔁 34

    printf("------original doubly list------\n");
    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    puts("");

    // reverse entire doubly linked list
    head = reverseEntireList(head);

    printf("-----reversed doubly list------\n");
    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    puts("");

    return 0;
}