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
void printlist(node *head,int loopingconstraint)
{
    node *temp;
    temp = (node *)malloc(sizeof( node));
    temp = head;
    for(int i=0;i<=loopingconstraint+1;i++)
    {
        printf("%d",temp ->data);
        temp = temp->next;
        printf("\n");
    }
}
int main()
{

    int n,head_data;
    printf("Enter the number of nodes.\n");
    scanf("%d",&n);
    printf("\nEnter the value at node #1 ->");
    scanf("%d",&head_data);
    node *head = (node *)malloc(sizeof(node));
    head ->data = head_data;
    head ->next = NULL;
    if(n>1)
    {
        for (int i = 1; i < n; i++)
        {
            node * a;
            int f;
            printf("\nEnter the value at node #%d ->",i+1);
            scanf("%d",&f);
            a = createandlinkatend(head,f);
        }
    }
    printf("\n");
    printlist(head,n);
}