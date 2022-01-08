//reverse links of the linked list more preferable than changing the values

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

// void reverse2(node *p)
// {

//     node *pointer2 = NULL;
//     node *pointer3 = NULL;
//     while (p != NULL)
//     {
//         pointer3 = pointer2;
//         pointer2 = p;
//         p = p->next;
//         pointer2->next = pointer3;
//     }
//     head = pointer2;
// }

//using recursion reverse the linked list
void recursion_reverse2(node *q, node *p) //q is the tailing pointer and p is the lead pointer

{
    if (p != NULL)
    {
        recursion_reverse2(p, p->next); //at calling time
        p->next = q;
    }
    else
    {
        head = q;
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
    node *q = NULL;
    // reverse2(q, head);
    recursion_reverse2(q, head);
    display(head);
}