#include"sorting.h"

void sortBubble(int arr[],int len)
{
    int i ,j ,tmp;
    for(i =0 ; i<len-1 ; i++)
    {
        for(j=0 ; j < len-i-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] =tmp;
            }
        }
    }
}
