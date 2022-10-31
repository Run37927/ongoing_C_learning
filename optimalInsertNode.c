#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node* insertAtEnd(struct node *ptr, int data)
{
    struct node *temp = malloc(sizeof(struct node)); // create a new node
    temp->data = data; // put new data in this new node
    temp->link = NULL; // set link part to NULL

    ptr->link = temp; // now first node is pointing to this new node
    return temp; // return the address of temp
}
int main() 
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = head;
    ptr = insertAtEnd(ptr, 98); // address of that temp assigned to ptr, now ptr is pointing to the last node in the linked list
    ptr = insertAtEnd(ptr, 3);
    ptr = insertAtEnd(ptr, 66);

    ptr = head;

    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}