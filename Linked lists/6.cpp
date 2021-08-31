//insert a node in a linked list

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
    node *t;
    node *last;
    head = (struct node *)malloc(sizeof(node));
    head->data = arr[0];
    head->next = NULL;
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

void display(node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

void insert_at_begin(node *p, int x) //this functin inserts the element at the begining
{

    node *t = new node; //creates a new node and assigns it to pointer t
    t->data = x;        //x which is passed in the function is assigned to data
    t->next = head;     //next pointer of t is pointed to head
    head = t;           //now head is pointing to t
}

//this function inserts a node at a pos we intend to if we give a pos then the element is
//inserted next to that index but cannot insert element at starting of the linked list
void insert_at_particular_index(node *p, int x, int pos)
{
    node *t = new node; //creates a node
    t->data = x;        //inserts the data we pass in the form of x to node
    node *point;        //creating a pointer to access the location before the pos
    point = head;
    for (int i = 0; i < pos - 1; i++)
    {
        point = point->next;
    }
    t->next = point->next;
    point->next = t;
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
    cout << "enter an element to insert" << endl;
    cin >> x;
    int pos;
    cin >> pos;
    // insert_at_begin(head, x);
    insert_at_particular_index(head, x, pos);
    display(head);
}