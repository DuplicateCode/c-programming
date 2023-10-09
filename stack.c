#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;
void push(int x)
{
    if(top < CAPACITY -1)
    {
        top = top + 1;
        stack[top] = x;
        printf("Successfully added items %d\n", x);
    }
    else
    {
        printf("No Spaces\n");
    }
}

int pop()
{
    if(top >= 0)
    {
        int value = stack[top];
        top = top - 1;
        return value;
        printf("Remove Item in stack: %d\n", value);
    }
    return  -1;
}

int peek()
{
    if(top >= 0)
    {
        return stack[top];
    }
    return -1;
}

int main()
{
    push(20);
    push(30);
    push(40);
    printf("Pop new item: %d\n", pop());
    push(50);
    printf("Top of the stack: %d\n", peek());
}
