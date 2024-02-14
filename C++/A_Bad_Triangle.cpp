#include <iostream>
int MAXSIZE = 8;
int stack[8];
int top = -1;

int isfull()
{
    if (top == MAXSIZE)
        return 1;
    else
        return 0;
}

int isempty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int push(int data)
{
    if (!isfull())
    {
        top = top + 1;
        stack[top] = data;
    }
    else
    {
        printf("Could not insert data, Stack is full.\n");
    }
}

int pop()
{
    int data;
    if (!isempty())
    {
        data = stack[top];
        top = top - 1;
        return data;
    }
    else
    {
        printf("Could not retrieve data, Stack is empty.\n");
    }
}

int main()
{
    int i;
    printf("Element pushed 44\n", push(44));
    printf("Element pushed 23\n", push(23));
    printf("Element pushed 77\n", push(77));
    printf("Element pushed 25\n", push(25));
    printf("Element popped %d\n", pop());
    printf("Element pushed 77\n", push(77));
    printf("Element popped %d\n", pop());
    printf("Element pushed 73\n", push(73));

    printf("Stack Elements: \n");

    for (i = 0; i < 8; i++)
    {
        printf("%d \n", stack[i]);
    }
    return 0;
}
