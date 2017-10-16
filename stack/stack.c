#include"stack.h"
#include <stdio.h>
#include <stdlib.h>

 void push(nodePtr*top,int data)
 {
    nodePtr tmp=(nodePtr)malloc(sizeof(Node));
    tmp->data = data;
    if(*top == NULL)
    {
        tmp->next = NULL;
        *top = tmp;
    }
    else
    {
        tmp->next = *top;
        *top = tmp;
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

   int pop(nodePtr*top)
   {
       if( *top == NULL)
            return -1;
          int data = (*top)->data;
          nodePtr p = *top ;
          *top = p->next;
          free(p);
          return data;
   }
