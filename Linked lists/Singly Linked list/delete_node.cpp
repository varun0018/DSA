//deleting a node in a linked with either first node or any node.

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head = NULL;

void create_linked_list(int arr[], int n)
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
    while (p)
    {
        cout << p->data << ' ';
        p = p->next;
    }
}
//deletes the fist node of the linked list
// int delete1(node *p)
// {

//     node *po = head;   //assigining the first node of the linked list to po
//     head = head->next; //moving first pointer(head)  to next locartion

//     free(po); //deleting po so that the data is lost we use free() to do this
// }

//deletes a node at any location of the linked list
int delete2(node *p, int index)
{
    node *q;

    q = NULL; //assinging NULL to q
    for (int i = 0; i < index - 1; i++)
    {
        q = p;         //assinging value of p to q
        p= p->next; //moving p forward
    }
    q->next = p->next; //removing link between the node we want to delete and previous node
    free(p);
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
    create_linked_list(arr, n);

    delete2(head, 4);
    display(head);
}