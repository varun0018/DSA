#include <iostream>
using namespace std;

struct circularQueue
{
    int size;
    int front; //to insert the data
    int rear;  //to delete the data
    int *Q;
};

void create(circularQueue *q)
{
    cout << "enter the size of queue" << endl;
    cin >> q->size;
    q->front = q->rear = 0;
    q->Q = (int *)malloc(q->size * sizeof(int));
}

void enque(circularQueue *q, int x)
{
    if ((q->rear + 1) % q->size == q->front)
    {
        cout << "queue is full" << endl;
    }
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = x;
    }
}

int deque(circularQueue *q)
{
    int x = -1;
    if (q->front == q->rear)
    {
        cout << "Empty Queue" << endl;
    }
    else
    {
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }
    return x;
}
void display(circularQueue q)
{
    int i = q.front + 1;
    do
    {
        cout << q.Q[i] << " ";
        i = (i + 1) % q.size;
    } while ((i != q.rear + 1) % (q.size));
}
int main()
{
    circularQueue cq;
    create(&cq);
    enque(&cq, 10);
    enque(&cq, 20);
    enque(&cq, 20);
    display(cq);
}