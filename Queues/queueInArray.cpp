#include <iostream>
using namespace std;

struct Queue
{
    int size;
    int in;
    int del;
    int *Q;
};

void create(Queue *q)
{
    cout << "Enter the size of queue" << endl;
    cin >> q->size;
    q->in = q->del = -1;
    q->Q = (int *)malloc(sizeof(int) * q->size);
}

void enque(Queue *q, int x)
{
    if (q->in == q->size - 1)
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        q->in++;
        q->Q[q->in] = x;
    }
}

int deque(Queue *q)
{
    int x = -1;
    if (q->in == q->del)
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        q->del++;
        x = q->Q[q->del];
    }
    return x;
}

void display(Queue q)
{
    for (int i = q.del + 1; i <= q.in; i++)
    {
        cout << q.Q[i] << " ";
    }
}

int main()
{
    Queue q;
    create(&q);
    enque(&q, 10);
    enque(&q, 20);
    enque(&q, 20);
    display(q);
    cout << deque(&q);
}