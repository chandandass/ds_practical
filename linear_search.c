#include <stdio.h>  //header files 
int main () //main function
{ 
  int a[10] = {10, 23, 40, 1, 2, 0, 14, 13, 50, 9}; 
  int item, i, flag; 
  
  printf("\nEnter Item which is to be find\n"); 
  scanf("%d",&item); 

  //looping logic
  for (i = 0; i< 10; i++)  
  { 
    // if else condition
     if(a[i] == item) 
     { 
       flag = i+1; 
       break; 
     } 
     else 
       flag = 0; 
   }
 
   if(flag != 0) 
   { 
      //printing the element which is to find
      printf("\nItem found at location %d\n",flag);  
   } 
   else 
   { 
      printf("\nItem not found\n"); 
   } 
   return 0;
}