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
    node *temp, *last;
    head = new node;
    head->data = arr[0];
    head->next = head;
    last = head;
    for (int i = 1; i < n; i++)
    {
        temp = new node;
        temp->data = arr[i];
        temp->next = last->next; //linking temp->next to last->next
        last->next = temp;
        last = temp;
    }
}
void display(node *p)
{
    do
    {
        cout << p->data << ' ';
        p = p->next;
    } while (p != head);
}

// bool flag = 0;
// void display(node *p)//recursive method
// {
//     if (p != head || flag == 0)
//     {
//         flag = 1;
//         cout << p->data << ' ';
//         display(p->next);
//     }
//     flag = 0;
// }
int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    create_linkedlist(arr, n);
    display(head);
}