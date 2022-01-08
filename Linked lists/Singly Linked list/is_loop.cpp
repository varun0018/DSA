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

int isLoop(node *point)
{
    node *p, *q;
    q = p = point;
    do
    {
        p = p->next;
        q = q->next;
        q = q != NULL ? q->next : NULL;

    } while (p && q); //p and q not equal to null or p and q are true
    if (p == q)
    {
        return true;
    }
    else
    {
        return false;
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
    display(head);
}