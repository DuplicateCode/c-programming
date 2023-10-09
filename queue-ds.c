#include<stdio.h>
#include<stdbool.h>
#define CAPACITY 5
int myQueue[CAPACITY];
int front = 0, rear = -1, totalItem = 0;

bool isFull()
{
    if(totalItem == CAPACITY)
    {
        return true;
    }
    return false;
}

bool isEmpty()
{
    if(totalItem == 0)
    {
        return true;
    }
    return false;
}
void Enqueue(int item)
{
    if(isFull())
    {
        printf("Sorry, the queue is full\n");
        return;
    }
    // Circular array concept
    rear = (rear + 1) % CAPACITY;
    myQueue[rear] = item;
    totalItem++;
}

int Dequeue()
{
    if(isEmpty())
    {
        printf("Sorry, the queue is empty.\n");
        return -1;
    }
    int frontItem = myQueue[front];
    myQueue[front] = -1;
    front = (front + 1) % CAPACITY;
    totalItem--;
    return frontItem;
}
//item add check
void printQueue()
{
    int i;
    printf("Queue: ");
    for(i = 0; i < CAPACITY; i++)
    {
        printf("%d ", myQueue[i]);
    }
    printf("\n");
}
int main()
{
    printf("************\nLet's implement our Queue\n*************\n");
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Enqueue(40);
    printQueue();
    Enqueue(50);
    printf("Dequeue item: %d\n", Dequeue());
    printQueue();
}
