#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head;

void create_linkedlist(int arr[], int n)
{
    node *t, *last;
    head = new node;
    head->data = arr[0];
    head->next = NULL;

    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

//inserts the data at the end of linked list
void insert_at_end(int x)
{
    node *last = head;
    node *t = new node;
    t->data = x;
    t->next = NULL;
    if (head == NULL)
    {
        head = last = t;
    }
    last->next = t;
    last = t;
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
    int x;
    cout << "enter a value to insert" << endl;
    cin >> x;

    insert_at_end(x);
    display(head);
}