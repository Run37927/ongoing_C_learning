#include <stdio.h>
#include <stdlib.h>

// traverse a single linked list to the end and count how many nodes are there

// suppose 45 -> 98 -> 3

struct node {
    int data;
    struct node *link;
};

void countNodes (struct node *head)
{
    int count = 0;
    if (head == NULL)
        printf("linked list is empty");
    
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL) {
        count ++;
        ptr = ptr->link;
    }
    printf("%d\n", count);
}


int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 54;
    current->link = NULL;
    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 78;
    current->link = NULL;

    head->link->link = current;

    countNodes(head);
}