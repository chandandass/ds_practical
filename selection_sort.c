// C program for implementation of selection sort  
#include <stdio.h>

/* Display function to print values */
void display(int array[], int size) 
{ 
  int i; 
  for (i=0; i < size; i++)
  { 
    printf("%d ",array[i]);
  }
  printf("\n"); 
} 


void seletion_sort(int array[],int size)
{
    
  int i, j, min_idx,temp;  
  
    // Loop to iterate on array 
    for (i = 0; i < size-1; i++)  
    {  
        // Here we try to find the min element in array 
        min_idx = i;  
        for (j = i+1; j < size; j++)
        {
        if (array[j] < array[min_idx])  
            min_idx = j;  
        }
        // Here we interchange the min element with first one              
              temp = array[min_idx];
              array[min_idx] = array[i]; 
              array[i] = temp;
    }
}

// The main function to drive other functions 
int main() 
{ 
  int array[] = {5, 3, 1, 9, 8, 2, 4, 7}; 
  int size = sizeof(array)/sizeof(array[0]);

  printf("This is how array looks before sorting: \n"); 
  display(array, size);
   seletion_sort(array,size);
  printf("This is how array looks after sorting: \n"); 
  display(array, size); 

return 0; 
}