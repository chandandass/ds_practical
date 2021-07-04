#include<stdio.h>
#define _infin 9999
#define m 4
#define n 4


int main()
{  // insertd graph's element
   long int Q[m][n]={  {0, 5, 0, 10},
                        {0, 0, 3, 0},
                        {0, 0, 0, 1},
                        {0, 0, 0, 0}} ;
   int i,j;
   
    
    for(i=0;i<m;i++)
      { for(j=0;j<n;j++)
         { 
            Q[i][j]=(Q[i][j]==0)?_infin:Q[i][j];

         }
      }

// Wharshall's Algorithm
 
 for(int k=0;k<m;k++)
    {
       for(i=0;i<m;i++)
       {
          for(j=0;j<n;j++)
          {
             Q[i][j]=(Q[i][j]>Q[i][k]+Q[k][j]) ? Q[i][k]+Q[k][j]:Q[i][j];

          }
       }
    }
// Print Element of Q graph
for(i=0;i<m;i++)
{   
   for(j=0;j<n;j++)
   {
       if(Q[i][j]==_infin)
       printf("Inf\t");
       else
      printf("%d\t",Q[i][j]);

   }
printf("\n");
}

 return 0;
}