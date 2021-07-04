

// Push function here, inserts value in stack and increments stack top by 1
void push(struct Stack* stack, int item) 
{ 
    if (isFull(stack)) 
        
        {
            printf("Overflow\n");
            return; }
    stack->array[++stack->top] = item; 
    printf("We have pushed %d to stack\n", item); 
}

// Function to remove an item from stack.  It decreases top by 1 
int pop(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
     
     {
         printf("underflow\n");
            return INT_MIN;
     } 
      
    return stack->array[stack->top--]; 
} 
  
// Function to return the top from stack without removing it 
int peek(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        return INT_MIN; 
    return stack->array[stack->top]; 
} 

int main()
{
struct Stack* stack = create(2); 
  
    push(stack, 5); 
    push(stack, 10); 
    push(stack, 15);
    

    pop(stack);
    pop(stack);
    pop(stack);
    pop(stack);
  
    return 0;
}