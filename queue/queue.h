#ifndef __QUEUE__
#define  __QUEUE__
//queue structure
struct _node
{
    int data;
    struct _node *next;
} ;

typedef struct _node Node;
typedef struct _node *nodePtr;

/**
 * @brief add new element in queue
 * @param nodePtr * queue top
 * @param int data
 */
 void enqueue(nodePtr* top,int data);

  /**
 * @brief remove top element from queue
 * @param nodePtr * queue top
 * @return int data
 */
 int dequeue(nodePtr*top);

   /**
 * @brief get top element from queue
 * @param nodePtr queue top
 * @return int data
 */
 int peek(nodePtr top);

/**
 * @brief  clear queue
 * @param nodePtr * top
 */
 void clear(nodePtr*top);

#endif // __QUEUE__
