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
void printBackward(nodePtr tail)
{
    //check if list is empty
    if(tail == NULL)
    {
        puts("an empty list");
      return;
    }
     //traverse pointer
    nodePtr p =  tail;
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
