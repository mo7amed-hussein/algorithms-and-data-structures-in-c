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

  void insertFront(nodePtr *head,int data)
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
         nodePtr node = *head;
         node->prev = tmp;
         tmp->next = node;
         tmp->prev = NULL;
         *head = tmp;
     }
  }

  void delete(nodePtr* head,int data)
  {
      if(*head == NULL)
            return;
      nodePtr p = *head;
       if( p->data == data)
        {
                p= p->next;
                p->prev = NULL;
                free(*head);
                *head = p;
        }
      while( p != NULL)
      {
          if(p->data == data)
          {
              break;
          }
          p = p->next;
      }
      if(p != NULL)
      {
        nodePtr prev = p->prev;
        prev->next = p->next;
        p->next->prev = prev;
        free(p);
      }
  }

  int deleteFront(nodePtr* head)
  {
      if(*head == NULL)
            return -1;

        nodePtr p = (*head)->next;
        if(p != NULL)
        {
             p->prev = NULL;
        }
        int data =  (*head)->data;
        free(*head);
        *head=p;
        return data;
  }

  int deleteLast(nodePtr* head)
  {
    if(*head == NULL)
            return -1;
         nodePtr p = (*head);
         for(p ; p->next != NULL ; p=p->next);
         int data = p->data;
         if(p == *head)
         {
             *head = NULL;
         }
         else
         {
            p->prev->next = NULL;
         }
         free(p);
         return data;
  }

  nodePtr find(nodePtr head,int data)
  {
       if(head != NULL)
     {
         nodePtr p = head;
         while(p !=NULL )
         {
             if(p->data == data)
             {
                 return p;
             }
             p = p->next;
         }

     }
      return NULL;
  }
