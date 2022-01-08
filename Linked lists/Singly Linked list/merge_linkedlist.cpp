//merging two sorted linked list in sorted order

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;    //head of first linked list
struct node *sechead = NULL; //head of second linked list

void create_linkedlist1(int arr[], int n) //creating first linked list
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

void create_linkedlist2(int arr[], int n) //creating second linked list
{
    struct node *t;
    struct node *last;
    sechead = (struct node *)malloc(sizeof(node));
    sechead->data = arr[0];
    last = sechead;

    for (int i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void display(struct node *p) //desplay linked list
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
void merge_linkedlist(node *head, node *sechead)
{
    node *third = NULL;
    node *last = NULL;
    if (head->data < sechead->data)
    {
        third = last = head;
        head = head->next;
        last->next = NULL;
    }
    else
    {
        third = last = sechead;
        sechead = sechead->next;
        last->next = NULL;
    }
    while (head != NULL && sechead != NULL)
    {
        if (head->data < sechead->data)
        {
            last->next = head;
            last = head;
            head = head->next;
            last->next = NULL;
        }
        else
        {
            last->next = sechead;
            last = sechead;
            sechead = sechead->next;
            last->next = NULL;
        }
        if (head != NULL)
        {
            last->next = head;
        }

        else
        {
            last->next = sechead;
        }
    }
}
int main()
{
    int n, m;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cin >> m;
    int arr2[m];

    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    create_linkedlist1(arr1, n);
    create_linkedlist2(arr2, m);
    merge_linkedlist(head, sechead);
    display(head);
}