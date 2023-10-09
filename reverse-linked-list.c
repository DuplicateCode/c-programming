#include<stdio.h>
#include<stdlib.h>
struct Node *createLinkedList(int arr[], int size);
void reverseLinkedList(struct Node *head);

struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    int a[] = {5, 10, 15, 20};
    struct Node *head;
    head = createLinkedList(a, 4);
    struct Node *newHead = head;
    while(head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");

    // Reverse a linked List
    reverseLinkedList(newHead);
    return 0;
}
void reverseLinkedList(struct Node *head)
{
    struct Node *privious = NULL, *current = head, *next = NULL;
    while(current != NULL)
    {
        // Store the next node
        next = current->next;
        // reverse the link/connection
        current->next = privious;
        // propagate
        privious = current;
        current = next;
    }
    head = privious;
    while(head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
struct Node *createLinkedList(int arr[], int size)
{
    struct Node *head = NULL, *temp = NULL, *current = NULL;
    int i;
    for(i = 0; i < size; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = arr[i];
        temp->next = NULL;
        if(head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->next = temp;
            current = current->next;
        }
    }
    return head;
}

