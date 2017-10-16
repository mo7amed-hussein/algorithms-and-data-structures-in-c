#include"queue.h"
#include <stdio.h>
#include <stdlib.h>

 void enqueue(nodePtr* top,int data)
 {
     nodePtr tmp=(nodePtr)malloc(sizeof(Node));
    tmp->data = data;
    tmp->next = NULL;
    if(*top == NULL)
        *top = tmp;
    else
    {
        nodePtr p = *top;
         //find last node in the list
         for(p ; p->next != NULL ; p=p->next);
         p->next = tmp;
    }
 }

 int peek(nodePtr top)
 {
     if( top == NULL)
            return -1;
      else
      {
          return top->data;
      }
 }

  int dequeue(nodePtr*top)
  {
      if( *top == NULL)
            return -1;
          int data = (*top)->data;
          nodePtr p = *top ;
          *top = p->next;
          free(p);
          return data;
  }

  void clear(nodePtr*top)
 {
     nodePtr p= *top,tmp;
    while(p != NULL)
    {
        tmp = p;
        p=p->next;
        free(tmp);
    }
    *top = NULL;
 }
