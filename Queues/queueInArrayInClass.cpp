#include <iostream>
using namespace std;

class Queue
{
private:
    int in;
    int del;
    int size;
    int *Q;

public:
    Queue()
    {
        in = del = -1;
        size = 10;
        Q = new int[size];
    }
    Queue(int size)
    {
        in = del = -1;
        this->size = size;
        Q = new int[this->size];
    }
    void enque(int x);
    int deque();
    void display();
};

void Queue::enque(int x)
{
    if (in == size - 1)
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        in++;
        Q[in] = x;
    }
}

int Queue::deque()
{
    int x = -1;
    if (in == del)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        x = Q[in + del];
        del++;
    }
    return x;
}
void Queue::display()
{
    for (int i = del + 1; i <= in; i++)
    {
        cout << Q[i] << " ";
    }
    cout << endl;
}

int main()
{
    Queue q(5);
    q.enque(1);
    q.enque(2);
    q.display();
}