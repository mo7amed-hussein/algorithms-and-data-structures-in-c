#ifndef __STACK__
#define __STACK__

//stack structure
struct _node
{
    int data;
    struct _node *next;
} ;

typedef struct _node Node;
typedef struct _node *nodePtr;

/**
 * @brief push new element in stack
 * @param nodePtr * stack top
 * @param int data
 */
 void push(nodePtr*top,int data);

 /**
 * @brief remove top element from stack
 * @param nodePtr * stack top
 * @return int data
 */
 int pop(nodePtr*top);

  /**
 * @brief get top element from stack
 * @param nodePtr stack top
 * @return int data
 */
 int peek(nodePtr top);

/**
 * @brief  clear stack
 * @param nodePtr * top
 */
 void clear(nodePtr*top);

#endif // __STACK__
