#include <stdio.h>
#include <stdlib.h>
//declaring an user defined datatype as "node"
typedef struct node
{
  int data;
  struct node *next;  
}node;

node *traverse(node *head)
{
    node *a;
    a = head;
    while((a->next)!=NULL)
    {
        a = a->next;
    }
    return a;
}

void insertnode(node *head,int data)
{
     node *temp;
     temp = (node *)malloc(sizeof(node));
     temp->data = data;
     temp ->next = NULL;
     node *temp1;
     temp1 = traverse(head);
     temp1->next = temp;
     
}

void printlist(node *head)
{
    node *temp;
    temp = head;
    printf("%d",temp->data);
    for(int i=0;i<2;i++)
    {
        if(temp->next == NULL)
        {
            return;
        }
        else
        {
        temp = temp->next; 
            printf("%d",temp ->data);
        }
    }
}

int main()
{
    node *head;
    head = (node *)malloc(sizeof( node));

    head -> data = 1;
    head -> next = NULL;

    printlist(head);
    printf("\n");
    insertnode(head,2);
    printlist(head);
    printf("\n");

}
