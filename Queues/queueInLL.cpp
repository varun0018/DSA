#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *front = NULL, *rear = NULL;

void enque(int x)
{
    Node *t = (struct Node *)malloc(sizeof(struct Node)); //creating new node t
    if (t == NULL)                                        //no place inside the heap
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
        {
            front = rear = t;
        }
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int deque()
{
    int x = -1;
    Node *t;
    if (front == NULL)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        x = front->data;
        t = front;
        front = front->next;
        free(t);
    }
    return x;
}

void display()
{
    Node *p = front;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
int main()
{
    enque(10);
    enque(20);
    enque(30);
    enque(40);
    cout << deque();
    display();
}