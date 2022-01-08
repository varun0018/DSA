#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} * Head;//global pointer head of the node

void create(int A[], int n)//creating a circular linked list
{
    int i;
    struct Node *t, *last;
    Head = (struct Node *)malloc(sizeof(struct Node));
    Head->data = A[0];
    Head->next = Head;
    last = Head;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}
void Display(struct Node *h)
{
    do
    {
        printf("%d ", h->data);
        h = h->next;
    } while (h != Head);
    printf("\n");
}

int Length(struct Node *p)
{
    int len = 0;
    do
    {
        len++;
        p = p->next;

    } while (p != Head);
    return len;
}
//inserting a node at a particular position
void Insert(struct Node *p, int index, int x)
{
    struct Node *t;//crating a new node
    int i;
    if (index < 0 || index > Length(p))//checking for validity of the indexes if index is less than 0 and index is greater than lenght
        return;//just return from the function if the if condition is true

    if (index == 0)//if index is zero than we have to insert before the head node
    {
        t = (struct Node *)malloc(sizeof(struct Node));//creating a new node
        t->data = x;//assigining value of num we want to insert
        if (Head == NULL)//if head is null then it the first node we are inseting so we have to make it point to inself as it is circular linked list
        {
            Head = t;//assiging value of t to head
            Head->next = Head;//also pointing head's next to head to make it circular
        }
        else ///if head is not NULL
        {
            while (p->next != Head)//move till last ele and 
                p = p->next;
            p->next = t;//make its next point to temp variable
            t->next = Head;
            Head = t;
        }
    }
    else
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        t->next = p->next;
        p->next = t;
    }
}
int Delete(struct Node *p, int index)
{
    struct Node *q;
    int i, x;

    if (index < 0 || index > Length(Head))
        return -1;
    if (index == 1)
    {
        while (p->next != Head)
            p = p->next;
        x = Head->data;
        if (Head == p)
        {
            free(Head);
            Head = NULL;
        }
        else
        {
            p->next = Head->next;
            free(Head);
            Head = p->next;
        }
    }
    else
    {
        for (i = 0; i < index - 2; i++)
            p = p->next;
        q = p->next;
        p->next = q->next;
        x = q->data;
        free(q);
    }
    return x;
}
int main()
{
    int A[] = {2, 3, 4, 5, 6};
    create(A, 5);

    Delete(Head, 8);

    return 0;
}