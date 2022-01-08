#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head = NULL;

void create_linkedlist(int arr[], int n)
{
    node *t, *last;
    head = new node;
    head->data = arr[0];
    head->next = NULL;
    last = head;

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
        cout << p->data << ' ';
        p = p->next;
    }
}

//this function inserts a node at a sorted position
void insert_at_sorted_pos(node *p, int x)
{
    //assigining pointer p to head of linked list
    node *q = NULL; //trailing pointer assigned to NULL
    node *t = new node;
    t->data = x;
    t->next = NULL;

    if (head == NULL)
    {
        head = t;
    }

    else
    {
        while (p && p->data < x) //while p is not equal to null and data is less than x
                                 //which means we are trying to find position of data we want to insert in sorted list
        {
            q = p;       //assigining value of p so that q can follow it
            p = p->next; //moving p to next node so that it can traverse linked list
        }
        if (p == head)
        {
            t->next = head;
            head = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    cin >> arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "element to insert" << endl;
    cin >> x;
    create_linkedlist(arr, n);

    insert_at_sorted_pos(head, x);

    display(head);
}