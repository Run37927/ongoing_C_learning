#include <stdio.h>
#include <stdlib.h>
// suppose we want to store a list of numbers 23 54 78 90
// can use an array
// or use a linked list

struct node {
    int data;
    struct node *link;
};

int main()
{
    int arr[] = {23, 54, 78, 90};

    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 23;
    head->link = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 54;
    current->link = NULL;

    // to link up the first node
    // first node is connected with second node now
    head->link = current;

    return 0;
}
