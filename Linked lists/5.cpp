//improved searching in liner search by move to head method
//in this method we bring key to the starting of the node so that the key element can be
//accessed easily next time if we search the same element

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
    head->next=NULL;
    last = head;
    for (int i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(node));
        t->data = arr[i];

        t->next = NULL;
        last->next = t;
        last = t;
    }
}

node *search_improved(node *p, int key)
{
    struct node *q;
    while (p != NULL)
    {
        if (p->data == key)
        {
            q->next = p->next;
            p->next = head;
            head = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
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
    int key;
    cin >> key;
    cout << "element found at " << search_improved(head, key);
}