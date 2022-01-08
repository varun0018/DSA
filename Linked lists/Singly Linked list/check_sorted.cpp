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
    if (p != NULL)
    {
        cout << p->data << ' ';
        display(p->next);
    }
}

int check_sorted(node *sortee)
{
    int x = INT_MIN;       //initilizing value of x to min value of int
    while (sortee != NULL) //looop till linked list becomes empty
    {
        if (sortee->data < x) //check if not sorted return false
        {
            return false;
        }
        else
        {
            x = sortee->data;      //assiging sortee data to x
            sortee = sortee->next; //moving sortee to next
        }
    }
    return true; //if above loop exits without false
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
    cout << check_sorted(head);
}