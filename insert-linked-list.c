#include<stdio.h>
#include<stdlib.h>
struct Node *createLinkedList(int arr[], int size);
// Start insert data/node in the linked list
void insertAtBeginning(struct Node *head, int data);
void printList(struct Node *head);
void insertAtEnd(struct Node *head, int data);
struct Node {
    int data;
    struct Node *next;
};
int main()
{
    int a[] = {5, 10, 15, 20};
    struct Node *head;
    head = createLinkedList(a, 4);
    print(head);

    // insert at beginning
    //insertAtBeginning(head, 40);

    // Insert end
    insertAtEnd(head, 100);
    return 0;
}
// Beginning insert
void insertAtBeginning(struct Node *head, int data)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = head;

    struct Node *newHead = temp;
    struct Node *current = newHead;
    while(current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void insertAtEnd(struct Node *head, int data){
    struct Node *current = head;
    while(current->next != NULL)
    {
        current = current->next;
    }
     struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    current->next = temp;
    printList(head);
}

void printList(struct Node *head){
    struct Node *current;
while(current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
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
        else{
            current->next = temp;
            current = current->next;
        }
    }
    return head;
}

