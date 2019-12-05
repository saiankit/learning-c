#include <stdio.h>
#include <stdlib.h>
//declaring an user defined datatype as "node"
typedef struct node
{
  int data;
  struct node *next;  
}node;
//function to print the given list
void printlist( node *head)
{
     node *temp;
    temp = (node *)malloc(sizeof( node));
    temp = head;
    for(int i=0;i<3;i++)
    {
        printf("%d",temp ->data);
        temp = temp->next;
        printf("\n");
    }
}
int main()
{
     node *head,*second,*third;

    head = (node *)malloc(sizeof( node));
    second = (node *)malloc(sizeof( node));
    third = (node *)malloc(sizeof( node));

    head -> data = 1;
    head -> next = second;

    second ->data = 2;
    second ->next = third;

    third ->data = 3;
    third ->next = NULL;

    printlist(head);
}