#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

/**< doubly linked list node structure */
struct _node
{
    int data;
    struct _node *next,*prev;
} ;

typedef struct _node Node;
typedef struct _node *nodePtr;

/**
* @brief print doubly list data content in forward manner
* @param nodePtr list head
*/
void printForward(nodePtr head);

/**
* @brief print doubly list data content in backward manner
* @param nodePtr list tail
*/
void printBackward(nodePtr tail);

/**
 * @brief  insert new element to a doubly list end
 * @param nodePtr* list head
 * @param int element data
 */
 void insert(nodePtr *head,int data);

 /**
 * @brief  insert new element to a doubly list after specific node
 * @param nodePtr* list head
 * @param nodePtr node pointer
 * @param int element data
 */
 void insertAt(nodePtr *head,nodePtr node,int data);

 /**
  *@brief  delete node from a doubly list
 * @param nodePtr* list head
 * @param int data
  */
void delete(nodePtr* head,int data);

/**
  *@brief  delete node from a doubly list front
 * @param nodePtr* list head
 * @return int element data
  */
int deleteFront(nodePtr* head);

/**
  *@brief  delete node from a doubly list end
 * @param nodePtr* list head
 * @return int element data
  */
int deleteLast(nodePtr* head);

/**
 * @brief find element in doubly list
 * @param nodePtr list head
 * @param int element data
 * @return  nodePtr if true or NULL if false
 */
nodePtr find(nodePtr head,int data);

/**
 * @brief reverse nodes in a doubly list
 * @param nodePtr list head
 * @return  nodePtr  new head
 */
 nodePtr reverse(nodePtr head);

 /**
 * @brief sort nodes in a doubly list , it use bubble sorting
 * @param nodePtr list head
 */
 void sort(nodePtr head);

 /**
 * @brief  update node data in a doubly list
 * @param nodePtr node pointer
 * @param int element new data
 */
 void update(nodePtr node,int data);

  /**
 * @brief  clear a doubly list
 * @param nodePtr * list head
 */
 void clear(nodePtr*head);

 /**
 * @brief  insert new element to a doubly list front
 * @param nodePtr* list head
 * @param int element data
 */
 void insertFront(nodePtr *head,int data);

#endif // LINKEDLIST_H_INCLUDED
