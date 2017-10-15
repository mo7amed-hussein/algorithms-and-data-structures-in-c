#include"singlylinkedlist.h"
#include<stdio.h>
#include<stdlib.h>

void printSinglyList(nodePtr head)
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

 void insert(nodePtr *head,int data)
 {
     //allocate node
     nodePtr node=(nodePtr)malloc(sizeof(Node));

     node->data = data;
     node->next = NULL;
     if( *head == NULL)
     {
         *head = node;
     }
     else
     {

         nodePtr p = *head;
         //find last node in the list
         for(p ; p->next != NULL ; p=p->next);
         p->next = node;
     }
 }

 void insertAt(nodePtr *head,nodePtr node,int data)
 {
     //allocate node
     nodePtr tmp=(nodePtr)malloc(sizeof(Node));

     tmp->data = data;
      if( *head == NULL)
     {
         tmp->next =NULL;
         *head = tmp;
     }
     else
     {
          tmp->next = node->next;
          node->next = tmp;
     }

 }

 void delete(nodePtr* head,nodePtr node)
 {
     if( *head == NULL)
            return;
     if(*head == node)
     {
         *head = node->next;
         free(node);
     }
     else
     {
         nodePtr p = *head;
         //find last node in the list
         for(p ; p->next != node ; p=p->next);

         p->next = node->next;
         free(node);
     }
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

 nodePtr reverse(nodePtr head)
 {
       if( head == NULL)
            return;

        nodePtr p = head->next ,tmp;
        head->next = NULL;
        while(p->next != NULL)
        {
          tmp = p;
          p = p->next;
            tmp->next = head;
            head = tmp;
        }
        p->next = head;
        //head->next = NULL;
        return p;
 }

 void sort(nodePtr head)
 {
     nodePtr last =NULL,p,prev;
     p= head;
     int data;
     if(head == NULL)
        return;
     while(head->next !=last)
     {
         p=head;
         prev = p;
         while(p->next != last)
         {
             if(p->data > p->next->data)
             {
                 data = p->next->data;
                p->next->data = p->data;
                p->data = data;
             }
             prev =p;//keep preceded node
             p=p->next;
         }
         last = prev;
     }
     //check two remaining nodes if there
     if(head->next != NULL)
     {
          p=head;
          if(p->data > p->next->data)
             {
                 data = p->next->data;
                p->next->data = p->data;
                p->data = data;
             }

     }
 }

  void update(nodePtr node,int data)
  {
      if(node !=NULL)
            node->data = data;
  }
