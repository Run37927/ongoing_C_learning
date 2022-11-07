#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *link;
};

void insert_at_end(struct node *head, int data)
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

void printData(struct node *head) {
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

struct node* reverse_list(struct node *head)
{
    struct node *prev = NULL;
    struct node *next = NULL;

    while (head != NULL) {
        next = head->link;
        head->link = prev;
        prev = head;
        head = next;
    }
    head = prev;

    return head;
}

int main()
{
    struct node *head = malloc(sizeof(struct node)); // create a new node
    head->data = 45;
    head->link = NULL;

    insert_at_end(head, 98);
    insert_at_end(head, 3);
    // now it looks like 45 -> 98 -> 3

    // i want 3 -> 98 -> 45
    head = reverse_list(head);

    printData(head);
    return 0;
}