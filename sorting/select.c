#include"sorting.h"

void sortSelect(int arr[],int len)
{
   int i ,j ,max ,tmp;
    for(i =0 ; i<len-1 ; i++)
    {
        max = 0;
        for(j=0 ; j < len-i ; j++)
        {
            if(arr[j] > arr[max])
            {
                max =j;
            }
        }
        tmp = arr[len-i-1];
         arr[len-i-1] = arr[max];
         arr[max] = tmp;
    }
}
