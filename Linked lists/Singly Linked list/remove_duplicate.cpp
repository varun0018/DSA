//remove duplicates from sorted linked list

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void create_linkedlist(int arr[], int n)
{
    struct node *t;
    struct node *last;
    head = (struct node *)malloc(sizeof(node));
    head->data = arr[0];
    last = head;

    for (int i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

void remove_duplicate(node *p) //removes duplicates from sorted liked list
{

    node *q = head->next; //assiging next node of the head
    while (q != NULL)     //loop till q becomes NULL
    {
        if (p->data != q->data) //if values of two pointers does not match no need to delete any node

        {
            p = q;       //move p to q's position
            q = q->next; //move q to q's next location ie next node
        }
        else //if duplicates are found then
        {
            p->next = q->next; //make p->next point to q->next
            free(q);           //delete q so that duplicate is deleted
            q = p->next;       //move q to p->next
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    create_linkedlist(arr, n);
    remove_duplicate(head);
    display(head);
}