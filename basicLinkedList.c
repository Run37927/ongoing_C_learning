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

int main()
{
    struct node *head = malloc(sizeof(struct node)); // create a new node
    head->data = 0;
    head->link = NULL;

    for (int i=1; i<10; i++) {
        insert_at_end(head, i);
    }

    printData(head);
    return 0;
}