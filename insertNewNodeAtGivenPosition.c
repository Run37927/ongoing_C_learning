#include <stdio.h>
#include <stdlib.h>
// step 1: create a new node
// step 2: traverse the linked list
// step 3: update the links (order matters)



// create the self referential struct called node
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

void insert_at_position(struct node *head, int data, int position)
{
    struct node *ptr = head; // assign head to a temp ptr
    struct node *ptr2 = malloc(sizeof(struct node)); // create a new node for storing the one waiting to be inserted
    ptr2->data = data; // put data inside
    ptr2->link = NULL;

    position--; // decrement position
    while (position != 1)
    {
        ptr = ptr->link;
        position--;
    }
    ptr2->link = ptr->link; // assign 2nd link to new node, now new node pointing at last node
    ptr->link = ptr2; // assign new node address to 2nd node, 弥补link
}

int main()
{
    struct node *head = malloc(sizeof(struct node)); // create a new node
    head->data = 45;
    head->link = NULL;

    insert_at_end(head, 98);
    insert_at_end(head, 3);
    // now it looks like 45 -> 98 -> 3

    int data = 67;
    int position = 3;

    insert_at_position(head, data, position); // insert 67 at position three, which means between 98 and 3
    // after should look like 45 -> 98 -> 67 -> 3


    // printing the result
    struct node *ptr = head; // assign head to a temporary ptr
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}