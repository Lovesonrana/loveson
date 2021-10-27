/* write a c program to create a singly linked list by adding the nodes to the right hand side and then print the list*/

#include<stdio.h>

#include<stdlib.h>

void insertBeginning(int);
void display();

struct Node
{
   int data;
   struct Node *next;
}*head = NULL;

void main()
{
   int choice,value;
   
   while(1){
   mainMenu: printf("\n\n****** MENU ******\n1. Insert\n2. Display\n3. Exit\nEnter your choice: \n");
   scanf("%d",&choice);
   switch(choice)
   {
    case 1: 	
           printf("Enter the value to be insert: ");
           scanf("%d",&value);
           insertBeginning(value);
           break;

   case 2:
          display();
          break;

   case 3:
         printf("Program finished\n");
         return 0;
         
}
 
}
 
}


void insertBeginning(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   if(head == NULL)
   {
      newNode->next = NULL;
      head = newNode;
   }
   else
   {
      newNode->next = head;
      head = newNode;
   }
   printf("\nOne node inserted!!!\n");
}

void display()
{
   if(head == NULL)
   {
      printf("\nList is Empty\n");
   }
   else
   {
      struct Node *temp = head;
      printf("\n\nList elements are - \n");
      while(temp->next != NULL)
      {
	 printf("%d --->",temp->data);
	 temp = temp->next;
      }
      printf("%d --->NULL",temp->data);
   }
}

