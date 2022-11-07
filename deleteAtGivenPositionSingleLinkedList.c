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


void delete_at_pos(struct node **head, int pos)
{
    struct node *prev = *head;
    struct node *current = *head;

    if (*head == NULL) {
        printf("list is already empty!");
    } else if (pos == 1) { // which means we happen to be wanting to delete the 1st node in the list
        *head = current->link; // make head point to the 2nd node
        free(current); // free the 1st node
        current = NULL;
    } else { // other situations
        while (pos != 1 ) {
            prev = current;
            current = current->link;
            pos--;
        }
        prev->link = current->link;
        free(current);
        current = NULL;
    }


}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));// create the first node, head is pointing to it
    head->data = 45; // put data in first node
    head->link = NULL;

    for (int i=5; i<10; i++)
        insertAtEnd(head, i);
    
    // 45 -> 5 -> 6 -> 7 -> 8 -> 9
    // i want to delete position 2, which is 5
    // 45 -> 6 -> 7 -> 8 -> 9
    int position = 2;
    delete_at_pos(&head, position);

    // print out result
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}