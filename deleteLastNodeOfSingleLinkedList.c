#include <stdio.h>
#include <stdlib.h>

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

struct node * del_last(struct node *head)
{
    if (head == NULL) {
        printf("list is already empty!");
    } else if (head->link == NULL) { // check if there is one node in the list
        free(head);
        head = NULL;
    } else {
        struct node *temp = head;
        struct node *temp_two = head;
        while (temp->link != NULL) {
            temp_two = temp;
            temp = temp->link;
        }
        temp_two->link = NULL;
        free(temp);
        temp = NULL;
    }
    return head;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));// create the first node, head is pointing to it
    head->data = 45; // put data in first node
    head->link = NULL;

    // add 5 more nodes
    for (int i=5; i<10; i++) {
        insertAtEnd(head, i);
    }
    // now it looks like 45 -> 5 -> 6 -> 7 -> 8 -> 9


    // the delete part
    head = del_last(head);
    struct node* ptr = head;
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}