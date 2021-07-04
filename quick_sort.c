
#include<stdio.h>
#define size(x) sizeof(x)/sizeof(x[0])
#define swap(x,y)  x^=y^=x^=y
// int b[2]={2,2}; //drawback of swap macro
// int i=0;
// int j=0;
// swap(b[i],b[j]);
// printf("%d %d",b[i],b[j]);
#define prints(x,size) for (int i=0;i<size;i++) printf("%d\t",a[i]); printf("\n"); 
#define prints2(x,beg,end)  for (int i=beg;i<end;i++) printf("%d\t",a[i]); printf("\n");


int partition_array(int a[],int 
              low,int high,int pivot)
{
    int j,i;
    i=j=low;
    while(i<high)
    {
        if(a[i]<=pivot)
        {
        int temp=a[i];
          a[i++]=a[j];
          a[j++]=temp;
          } 
       else
       i++;      }
    return j;
}

 void quick_sort(int a[],int low,int high)
{
    if(low>=high-1)
     return (void)0;
int j=partition_array(a,low,high,a[high-1]);
  
    quick_sort(a,low,j-1);
    quick_sort(a,j,high);
}
int main()
{   int a[]={10,2,5,3,4,1,-1,9,4,20,13};
    int pivot=4;
    quick_sort(a,0,sizeof(a)/sizeof(a[0]));
    prints(a,size(a));
    return 0; 
       }

