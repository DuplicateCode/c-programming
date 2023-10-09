#include<stdio.h>
#define size 5
int stack[size];
int top = -1;
void push(int x)
{
    if(top < size -1)
    {
        top = top + 1;
        stack[top] = x;
        printf("Successfully added items: %d\n", x);
    }
    else{
        printf("No space in this stack\n");
    }
    return -1;
}
int pop()
{
    if(top >= 0)
    {
        int val = stack[top];
        top = top - 1;
        return val;
        printf("Pop item: %d\n", val);
    }
    return -1;
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
    push(60);
    push(50);
    push(40);
    push(30);
    push(20);
    printf("Remove item: %d\n", pop());
    push(5);
    printf("Top of the stack or Head: %d", peek());
    return 0;
}
