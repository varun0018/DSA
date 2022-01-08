#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev; //pointer for previous node
    int data;          //int type data
    struct Node *next; //pointer for next node
} *first = NULL;       //global pointer for head node

//function to create linked list
void create(int A[], int n)
{
    struct Node *t, *last;
    int i;

    first = (struct Node *)malloc(sizeof(struct Node)); //memory in heap
    first->data = A[0];                                 //assigining first array ele to first data
    first->prev = first->next = NULL;                   //assigining first->prev and first->next to NULL
    last = first;                                       //making last to point on first

    for (i = 1; i < n; i++) //using for loop to make more nodes of linked list
    {
        t = (struct Node *)malloc(sizeof(struct Node)); //creating a temp node in the heap
        t->data = A[i];                                 //assigining t->data to arr[i]
        t->next = last->next;                           //
        t->prev = last;
        last->next = t;
        last = t;
    }
}
void Display(struct Node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
int Length(struct Node *p)
{
    int len = 0;

    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);

    Display(first);
    return 0;
}