#include <stdio.h>
#include <stdlib.h>
//declaration of user defined datatype linked list
typedef struct node
{
  int data;
  struct node *next;  
}node;
//traversal-returns address of last node-returns a pointer variable
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
//createandlink
node *createandlinkatend(node *head,int data)
{

    //creation
    node * newnode,*lastnode;
    newnode = (node*)malloc(sizeof(node));
    newnode ->data = data;
    newnode ->next = NULL;
    //link
    lastnode = traverse(head);
    lastnode -> next = newnode;

    return newnode;
}
void printlist(node *head)
{
    node *temp;
    temp = (node *)malloc(sizeof( node));
    temp = head;
    for(int i=0;i<5;i++)
    {
        printf("%d",temp ->data);
        temp = temp->next;
        printf("\n");
    }
}
int main()
{
    node *head = (node *)malloc(sizeof(node));
    head ->data = 1;
    head ->next = NULL;

    for (int i = 1; i <= 4; i++)
    {
        node * a;
        int f;

        scanf("%d",&f);
        a = createandlinkatend(head,f);
    }
    printlist(head);
    
}