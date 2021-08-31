//display linked lists using recursion

#include <bits/stdc++.h>
using namespace std;

struct node
{

    int data;          //data of the node
    struct node *next; //next pointer of type node pointing to next address of linked list
};
struct node *head = NULL; //first pointer or the head global pointer

//create linked list using array
void create_linkedlist(int arr[], int n)
{

    struct node *t;                             //tempory pointer of struct node type
    struct node *last;                          //pointer to last of the linked list of struct node type
    head = (struct node *)malloc(sizeof(node)); //create memory in heap and also creating first node
    head->data = arr[0];                        //assigning value of first array element to the data variable of first pointer
    last = head;                                //assign first pointer value pointing to head of linked list to pointer last

    for (int i = 1; i < n; i++) //creating remaining nodes using loop
    //starting from 1 as 0 is intilized to first
    {
        t = (struct node *)malloc(sizeof(struct node)); //creating a temp variable in heap memory
        t->data = arr[i];                               //assinging value of arr at index i to data of t
        t->next = NULL;                                 //assigining NULL to next of temp pointer
        last->next = t;                                 //assigining value of t to next of last pointer
        last = t;
    }
}

//display linked list in ascending order
// void display(struct node *p)
// {
//     if (p != NULL)
//     {
//         cout << p->data << ' ';
//         display(p->next);
//     }
// }

//display linked list in reversed order
// int display(struct node *p)
// {
//     if (p != NULL)
//     {
//         display(p->next);
//         cout << p->data << ' ';
//     }
// }

//count the number of nodes in a linked list

// int count(struct node *p)
// {
//     int count = 0;
//     while (p != NULL)
//     {
//         count++;
//         p = p->next;
//     }
//     cout << count;
// }

//count function using recursion
// int count(struct node *p)
// {

//     if (p == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return count(p->next) + 1;
//     }
// }

// //add all the data of the nodes in linked list using loop
// int add(struct node *p)
// {
//     int sum = 0;
//     while (p != NULL)
//     {
//         sum = sum + (p->data);
//         p = p->next;
//     }
//     return sum;
// }
//add all the data of the nodes in linked list using recursion
int add(struct node *p)
{
    if (p == 0)
    {
        return 0;
    }
    else
    {
        return add(p->next) + p->data;
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
    // display(head);
    // count(head);
    cout << add(head);
}