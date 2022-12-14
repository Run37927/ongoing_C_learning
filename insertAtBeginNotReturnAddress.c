#include <stdio.h>
#include <stdlib.h>


// insert 3 in front of 45 -> 98 so it becomes 3->45->98
struct node {
    int data;
    struct node *link;
};

void insertAtBegin(struct node **head, int data) //parameter becomes double pointer!!!
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL;

    ptr->link = *head;
    *head = ptr;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node)); // create the first node, head is pointing to it
    head->data = 45; // put data in
    head->link = NULL;

    struct node *ptr = (struct node *)malloc(sizeof(struct node)); // create another node, ptr is pointing to it
    ptr->data = 98;
    ptr->link = NULL;

    head->link = ptr; // put ptr address into first node link part, now first node is pointing at second node

    int data = 3;

    insertAtBegin(&head, data); // INSTEAD PASS THE ADDRESS OF HEAD HERE
    ptr = head;

    while(ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}