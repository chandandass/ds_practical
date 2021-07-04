#include<stdio.h>   //header files

int binarySearch(int[], int, int, int);

int main() //main function
{
  int arr[10] = {9, 26, 33, 47, 53, 60, 75, 80, 86, 99};
  int item, location = -1;

  printf("Enter the item which you want to find ");
  scanf("%d",&item);

  location = binarySearch(arr, 0, 9, item);

  if(location != -1) //looping logic
  {
    printf("Item found at location %d",location); //printing the element
  }
  else
  {
    printf("Item not found");
  }
  return 0;
}

int binarySearch(int a[], int start, int last, int item)
{
  int mid;
  if(last >= start)
  {
    mid = (start + last)/2;
    if(a[mid] == item){
       return mid+1;
    }
    else if(a[mid] < item){
       return binarySearch(a,mid+1,last,item);
    }
    else{
       return binarySearch(a,start,mid-1,item);
    }
  }
  return -1;
}