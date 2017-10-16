#include"searching.h"

 int searchLin(int arr[],int len,int data)
 {
     int index =-1,i;
     for(i=0;i<len ;i++)
     {
         if( arr[i] == data)
         {
             index = i;
             break;
         }
     }
     return index;
 }
