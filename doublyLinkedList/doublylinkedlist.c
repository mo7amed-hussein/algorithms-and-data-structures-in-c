#include"doublylinkedlist.h"
#include <stdio.h>
#include <stdlib.h>

void printForward(nodePtr head)
{
    //check if list is empty
    if(head == NULL)
    {
        puts("an empty list");
      return;
    }
     //traverse pointer
    nodePtr p =  head;
    printf("[ ");
    while(p!= NULL)
    {
        //get data
        int data = p->data;
        //print data
        printf("%d ",data);
        //move pointer
        p = p->next;
    }
    printf(" ]\n");
}
void printBackward(nodePtr head)
{
    //check if list is empty
    if(head == NULL)
    {
        puts("an empty list");
      return;
    }
    nodePtr p =head;
    for(p ; p->next != NULL ; p=p->next);
    printf("[ ");
    while(p!= NULL)
    {
        //get data
        int data = p->data;
        //print data
        printf("%d ",data);
        //move pointer
        p = p->prev;
    }
    printf(" ]\n");
}

 void insert(nodePtr *head,int data)
 {
     nodePtr node = (nodePtr)malloc(sizeof(Node));
     node->data = data;
     node->next = NULL;
    if( *head == NULL)
     {
        node->prev = NULL;
         *head = node;
     }
     else
     {
         nodePtr p =*head;
         for(p ; p->next != NULL ; p=p->next);
         node->prev = p;
         p->next = node;
     }
 }

 void insertAt(nodePtr *head,nodePtr node,int data)
 {
     nodePtr tmp = (nodePtr)malloc(sizeof(Node));
     tmp->data = data;
     if( *head == NULL)
     {
         tmp->next =NULL;
         tmp->prev = NULL;
         *head = tmp;
     }
     else
     {
         node->next->prev = tmp;
         tmp->next = node->next;
         tmp->prev = node;
         node->next = tmp;
     }
 }
