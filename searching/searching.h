#ifndef __SEARCHING__
#define __SEARCHING__

/**
 *@brief search for an element in an array using linear search
 * @param int[] array
 * @param int array length
 * @param int element
 * @return int index if found or -1 if not
 */
 int searchLin(int arr[],int len,int data);

 /**
 *@brief search for an element in sorted array using binary search
 * @param int[] array
 * @param int array length
 * @param int element
 * @return int index if found or -1 if not
 */
 int searchBin(int arr[],int len,int data);

  /**
 *@brief search for an element in sorted ,equally distributed array using interpolation search
 * @param int[] array
 * @param int array length
 * @param int element
 * @return int index if found or -1 if not
 */
 int searchInter(int arr[],int len,int data);

#endif // __SEARCHING__
