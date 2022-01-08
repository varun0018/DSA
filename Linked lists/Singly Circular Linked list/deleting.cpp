#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;

void create_linkedlist(int arr[], int n)
{
    Node *temp, *last;
    head = new Node;
    head->data = arr[0];
    head->next = head;
    last = head;
    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = arr[i];
        temp->next = last->next; //linking temp->next to last->next
        last->next = temp;
        last = temp;
    }
}
void display(Node *p)
{
    do
    {
        cout << p->data << ' ';
        p = p->next;
    } while (p != head);
}

int Delete(struct Node *p, int index)
{
    struct Node *q;
    int i, x;

    // if (index < 0 || index > Length(head)) //checking for valid index to delete
    //     return -1;
    if (index == 1) //if index is 1 ie it is head we have to delete
    {
        while (p->next != head) //move to last node and make it point to head->next
            p = p->next;
        x = head->data;
        if (head == p) //if head is the only node in the linked list
        {
            free(head);  //delete head
            head = NULL; //and make head as null
        }
        else //if head is not the only node in the linked list
        {
            p->next = head->next; //make last->next node pioint to head->next
            free(head);           //delete previous head node
            head = p->next;       //move head to p->next
        }
    }
    else //to delete node at any pos except head node
    {
        for (i = 0; i < index - 2; i++) //move till the 1 pos before we want to delete
            p = p->next;
        q = p->next;       //move pointer p to p->next
        p->next = q->next; //make p->next to poinit to q->next
        x = q->data;
        free(q); //delete q
    }
    return x;
}
int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    create_linkedlist(arr, n);
    Delete(head, 4);
    display(head);
}