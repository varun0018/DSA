#include <iostream>

#include <stdlib.h>

//structure to create stack or a blueprint to create stack
struct Stack
{
    int size;
    int top;
    int *S;
};

//creates a stack
    
int create(struct Stack *st)
{
    printf("Enter Size");
    scanf("%d", &st->size);                        //getting size of stack

    st->top = -1;                                  //assiging top as -1
    st->S = (int *)malloc(st->size * sizeof(int)); //creting memory in heap
}

//displays the stack elements
void Display(struct Stack st)
{
    int i;
    for (i = st.top; i >= 0; i--) //looping from last element of the array
        printf("%d ", st.S[i]);
    printf("\n");
}

//pushes or adds element to the stack
void push(struct Stack *st, int x)
{
    if (st->top == st->size - 1) //condition for stack full
        printf("Stack overflow\n");
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}
//deletes last element of the stack
int pop(struct Stack *st)
{
    int x = -1;

    if (st->top == -1) //condition for empty stack
        printf("Stack Underflow\n");
    else
    {
        x = st->S[st->top--];
    }
    return x;
}

//output the element at particular index
int peek(struct Stack st, int index)
{
    int x = -1;
    if (st.top - index + 1 < 0)
        printf("Invalid Index \n");
    x = st.S[st.top - index + 1];

    return x;
}
//check if stack is empty
int isEmpty(struct Stack st)
{
    if (st.top == -1)
        return 1;
    return 0;
}
//check if stack is full
int isFull(struct Stack st)
{
    return st.top == st.size - 1;
}
//returns the last elemet of the stack or top element of the stack
int stackTop(struct Stack st)
{
    if (!isEmpty(st))
        return st.S[st.top];
    return -1;
}
int main()
{
    struct Stack st;
    create(&st);

    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);

    printf("%d \n", peek(st, 2));
    pop(&st);
    Display(st);

    return 0;
}