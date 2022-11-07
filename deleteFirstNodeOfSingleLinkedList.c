#include <stdio.h>
#include <stdlib.h>
// create a temp pointer points at first node
// move head to 2nd node
// delete first node

struct node {
    int data;
    struct node *link;
};

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

struct node* del_first(struct node *head)
{
    if (head == NULL) {
        printf("list is already empty!");
    } else {
        struct node *temp = head;
        head = head->link;
        free(temp);
    }

    return head;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));// create the first node, head is pointing to it
    head->data = 45; // put data in first node
    head->link = NULL;

    for (int i=5; i<10; i++) {
        insertAtEnd(head, i);
    }

    // the delete part
    head = del_first(head);
    struct node* ptr = head;
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}