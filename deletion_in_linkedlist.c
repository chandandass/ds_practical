#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node *next;
};

void insert(struct Node** head, int data){

  struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

  newNode->data = data;
  newNode->next = *head;

  //changing the new head to this freshly entered node
  *head = newNode; 
}

void delete(struct Node** head, int delVal)
{
    struct Node* temp = *head;
    struct Node* previous;

    //Case when there is only 1 node in the list
    if(temp->next==NULL)
    {
       *head = NULL;
       free(temp);
       printf("%d value has bee deleted \n",delVal);
       return;
    }
    //if the head node itself needs to be deleted
    if(temp!=NULL && temp->data==delVal)
    {
        //Case 1 head becomes 30
        *head = temp->next; //changing head to next in the list
         
        printf("%d value has been deleted \n",delVal);
        //case 1: 22 deleted and freed
        free(temp);
        return;
    }

    //run until we find the value to be deleted in the list
    while (temp != NULL && temp->data != delVal) 
    { 
        //store previous link node as we need to change its next val
        previous = temp; 
        temp = temp->next;  
    }

    //if value is not present then
    //temp will have traversed to last node NULL
    if(temp==NULL)
    {
        printf("Value not found\n");
        return;
    }

    // Case 2: (24)->next = 16 (as 20->next = 16) 
    // Case 3: (16)->next = NULL (as 12->next = NULL)
    previous->next = temp->next;
    free(temp);
    
    //case 2: 20 deleted and freed
    //case 3: 12 deleted and freed
    printf("%d value has been deleted \n",delVal);
}

void display(struct Node* node){

  //as linked list will end when Node is Null
  while(node!=NULL)
  {
    printf("%d ",node->data);
    node = node->next;
  }
  printf("\n");
}

int main()
{
  struct Node* head = NULL;

  /*Need & i.e. address as we
  need to change head address only needs to traverse
  and access items temporarily
  */
  insert(&head,10);
  insert(&head,20);
  insert(&head,30);
  insert(&head,40);


  /*No need for & i.e. address as we do not
  need to change head address
  */
  display(head);

  //deleting first occurance of a value in linked list
  delete(&head,30);
  delete(&head,20);

  
  printf("\n after deletion\n");

  display(head); 

 return 0; 
}