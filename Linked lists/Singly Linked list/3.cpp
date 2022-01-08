//finding max element in linked list

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

// void display(struct node *p)
// {
//     while (p != NULL)
//     {
//         cout << p->data << " ";
//         p = p->next;
//     }
// }
//return max of the linked list
int max(struct node *p)
{
    int mx = INT_MIN;
    while (p)
    {
        if (mx < p->data)
        {
            mx = p->data;
        }
        p = p->next;
    }
    return mx;
}
//fucntion returns min of the linked list
int mn(struct node *p)
{
    int mini = INT_MAX;
    while (p != NULL)
    {
        if (p->data < mini)
        {
            mini = p->data;
        }
        p = p->next;
    }
    return mini;
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
    cout << "max is " << max(head) << endl;
    cout << "min is " << mn(head) << endl;
}