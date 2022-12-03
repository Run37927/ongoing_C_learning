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

struct node * delLast(struct node *head)
{
    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // after while loop temp is pointing at the last node
    temp->prev->next = NULL;
    free(temp);
    temp = NULL;

    return head;
}

struct node * delMiddle(struct node *head, int pos)
{
    struct node *temp = head;
    struct node *temp2 = NULL;

    if (pos == 1) {
        head = delFirst(head);
        return head;
    }

    while (pos > 1) {
        temp = temp->next;
        pos--;
    }
    // after done while loop, temp is pointing at the one I want to delete

    if (temp->next == NULL) {
        head = delLast(head);
    } else {
        temp2 = temp->prev;
        temp2->next = temp->next;
        temp->next->prev = temp2;
        free(temp);
        temp = NULL;
    }

    return head;
}

int main()
{
    struct node *head = NULL;
    struct node *ptr;
    head = addToEmpty(head, 34);
    head = addAtEnd(head, 25);
    head = addAtEnd(head, 13);

    // 34 🔁 25 🔁 13

    printf("------before deleting the middle node------\n");
    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    puts("");


    // delete the 2nd node in the doubly linked list, which is 25
    head = delMiddle(head, 2);

    printf("-----after deleting the chosen middle node------\n");
    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    puts("");

    return 0;
}