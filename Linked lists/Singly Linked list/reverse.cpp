//reversing linked list by using an auxilary array

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
//reverses a linked list by using an auxilary array
void reverselink(node *p)
{
    int *arr; //array
    int i = 0;
    while (p != NULL) //for copying data of linked list to array
    {
        arr[i] = p->data; //copying data
        p = p->next;      //moving to next of linked list
        i++;              //movind array to next
    }
    p = head;         //again getting back p to head which was at end of linked list
    i--;              //decrementing i which was outside the linked list and getting it back to last element of linked list
    while (p != NULL) //for putting back the values we copied in reverse order
    {
        p->data = arr[i]; //assiging last value of array to starting of linked list so the data in linked list are in reverse order

        p = p->next; //moving p to next node of linked list
        i--;         //decrementing array from last to strting element
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
    reverselink(head);
    display(head);
}