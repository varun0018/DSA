//searching in linked list
//we cannot perform binary search in linked list
//we perform linear search in linked list

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void create_linkedlist(int arr[], int n)
{
    struct node *t;
    struct node *last;
    head = (struct node *)malloc(sizeof(node));
    head->data = arr[0];
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

void display(struct node *p)
{
    while (p != NULL)
    {
        cout << p->data << ' ';
        p = p->next;
    }
}

int liner_search(node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
        {
            cout << "Element found at location: " << p << endl;
            break;
        }
        else
        {
            cout << "element not found" << endl;
        }
        p = p->next;
    };
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
    liner_search(head, key);
}