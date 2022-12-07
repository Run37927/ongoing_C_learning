#include <stdio.h>
#include <stdlib.h>

struct node {
    float coefficient;
    int exponent;
    struct node *link;
};

// 5x^3 - 3x^2 + 2x + 1
// 5 3, -3 2, 2 1, 1 0


struct node * insert(struct node *head, float coeffi, int expo) {
    struct node * temp;
    struct node *newP = malloc(sizeof(struct node));
    newP->coefficient = coeffi;
    newP->exponent = expo;
    newP->link = NULL;

    // we want descending order by exponents
    if (head == NULL || expo > head->exponent) { // compare with the first node's exponent
        newP->link = head;
        head = newP;
    } else {
        temp = head;
        while (temp->link != NULL && temp->link->exponent >= expo) {
            temp = temp->link;
        }
        newP->link = temp->link;
        temp->link = newP;
    }

    return head;
}


struct node * create(struct node *head)
{
    int n;
    float coeffi;
    int expo;

    printf("enter the number of terms: ");
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        printf("enter the coefficient for term %d: ", i+1);
        scanf("%f", &coeffi);

        printf("enter the exponent for term %d: ", i+1);
        scanf("%d", &expo);
        head = insert(head, coeffi, expo);
    }
    return head;
}


void print(struct node *head)
{
    if (head == NULL) {
        printf("no polynomial.");
    } else {
        struct node * temp = head;
        while (temp != NULL) {
            printf("(%.1fx^%d)", temp->coefficient, temp->exponent);
            temp = temp->link;

            if (temp != NULL)
                printf(" + ");
            else
                printf("\n");
        }
    }
}


int main()
{
    struct node * head = NULL;
    printf("enter the polynomial:\n");

    head = create(head);

    // print out result
    print(head);
    return 0;
}