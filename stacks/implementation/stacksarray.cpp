#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    int top;
    int size;
    int *s;
};

void create(struct Stack *st)
{
    cout << "enter size";
    cin >> st->size;
    st->top = -1;
    st->s = (int *)malloc(st->size * sizeof(int));
}

void push(struct Stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        cout << "stack overflow" << endl;
    }
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}

int pop(struct Stack *st)
{
    int x;
    if (st->top == -1)
    {
        cout << "stack underflow" << endl;
    }
    else
    {
        x = st->s[st->top--];
    }
    return x;
}

int display(struct Stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        cout << st.s[i];
    }
}

int isEmpty(struct Stack st)
{
    if (st.top == -1)
        return 1;
    return 0;
}

int isFull(struct Stack st)
{
    if (st.top == st.size - 1)
        return 1;
    return 0;
}

int stackTop(struct Stack st)
{
    if (!isEmpty(st))
    {
        cout << st.s[st.top];
    }
    return -1;
}

int peek(struct Stack st, int pos)
{
    int x = -1;
    if (st.top - pos + 1 < 0)
    {
        cout << "invalid index" << endl;
    }
    x = st.top - pos + 1;
    return x;
}

int main()
{
    struct Stack st;
    create(&st);
    push(&st, 5);
    push(&st, 3);
    push(&st, 4);
    push(&st, 9);
    pop(&st);

    display(st);
}