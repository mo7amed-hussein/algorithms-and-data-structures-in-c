#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

/**< singly linked list node structure */
struct _node
{
    int data;
    struct _node *next;
} ;

typedef struct _node Node;
typedef struct _node *nodePtr;

/**
* @brief print singly list data content
* @param nodePtr list head
*/
void printSinglyList(nodePtr head);

/**
 * @brief  insert new element to a singly list
 * @param nodePtr list head
 * @param int element data
 */
 void insert(nodePtr head,int data);

 /**
 * @brief  insert new element to a singly list after specific node
 * @param nodePtr list head
 * @param nodePtr node pointer
 * @param int element data
 */
 void insertAt(nodePtr head,nodePtr node,int data);

 /**
  *@brief  delete node from a singly list
 * @param nodePtr list head
 * @param nodePtr node pointer
  */
void delete(nodePtr head,nodePtr node);

/**
 * @brief find element in singly list
 * @param nodePtr list head
 * @param int element data
 * @return  nodePtr if true or NULL if false
 */
nodePtr find(nodePtr head,int data);

/**
 * @brief reverse nodes in a singly list
 * @param nodePtr list head
 * @return  nodePtr  new head
 */
 nodePtr reverse(nodePtr head);

 /**
 * @brief sort nodes in a singly list , it use bubble sorting
 * @param nodePtr list head
 */
 void sort(nodePtr head);

 /**
 * @brief  update node data in a singly list
 * @param nodePtr list head
 * @param nodePtr node pointer
 * @param int element new data
 */
 void update(nodePtr head,nodePtr node,int data);

#endif // LINKEDLIST_H_INCLUDED
