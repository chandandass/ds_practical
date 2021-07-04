#include<stdio.h>
#define SIZE 5

//Basic value initialization
int queue[SIZE], front = -1, rear = -1;

void Enqueue(int val){
    if(rear == SIZE-1)
        printf("Encountered Overflow Condition\n");
    else{
        //When adding initial element
        if(front == -1)
            front = 0;
        
        rear++;
        queue[rear] = val;
        printf("%d was enqueued\n",val);
   }
}
void Dequeue(){
    if(front == -1)
        printf("Underflow condition\n");
    else{
        printf("Dequeued : %d\n", queue[front]);
        front++;
        
        //resetting the queue when last item is Dequeued 
        if(front > rear)
	        front = rear = -1;
   }
}
void display(){
    if(rear == -1)
        printf("\nQueue is empty");
   else{
        int i;
        printf("\nNow, we are printing the Queue :");
        
        for(i=front; i<=rear; i++)
	        printf("%d ",queue[i]);
   }
}

int main()
{
   Enqueue(10);
   Enqueue(20);
   Enqueue(30);
   Enqueue(40);
   
   
   Dequeue();
   Dequeue();
   
   display();
   return 0;
}