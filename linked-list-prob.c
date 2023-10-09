#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main()
{
  struct Node *mahafuj = NULL;
  struct Node *rakib = NULL;
  struct Node *rafi = NULL;
  struct Node *habib = NULL;
  mahafuj = (struct Node*)malloc(sizeof(struct Node));
  rakib = (struct Node*)malloc(sizeof(struct Node));
  rafi = (struct Node*)malloc(sizeof(struct Node));
  habib = (struct Node*)malloc(sizeof(struct Node));
  mahafuj->data = 20;
  rakib->data = 30;
  rafi->data = 40;
  habib->data = 50;
  mahafuj->next = rakib;
  rakib->next = rafi;
  rafi->next = habib;
  habib->next = NULL;
  while(mahafuj != NULL)
  {
      printf("%d -> ", mahafuj->data);
      mahafuj = mahafuj->next;
  }
}
