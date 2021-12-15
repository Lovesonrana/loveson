
#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node* link;
};

void print(struct node* head){
    struct node*ptr;
    ptr=head;
    
    while(ptr != NULL){
      printf("%d ",ptr->data);
      ptr=ptr->link;
    }
}

void altdel(struct node*head){
 
    if (head == NULL) 
        return; 
  
    
    struct node *prev = head; 
    struct node *node = head->link; 
  
    while (prev != NULL && node != NULL) 
    { 
        
        prev->link = node->link; 
  
        prev = prev->link; 
        if (prev != NULL) 
            node = prev->link; 
    } 
}

   void move_to_front(struct node* head){

   struct node*p,*q;
   q=NULL;
   p=head;

   while(p->link != NULL);
   {
      q=p;
      p=p->link;
   }
   p->link=head;
   q->link=NULL;
   head=p;

}

int main(){

  struct node*head=malloc(sizeof(struct node));
  
  head->data=10;
  head->link=NULL;

  struct node*current=malloc(sizeof(struct node));
  current->data=20;
  current->link=NULL;
  head->link=current;

  current=malloc(sizeof(struct node));
  current->data=30;
  current->link=NULL;
  head->link->link=current;

  
  current=malloc(sizeof(struct node));
  current->data=40;
  current->link=NULL;
  head->link->link->link=current;

  
  current=malloc(sizeof(struct node));
  current->data=50;
  current->link=NULL;
  head->link->link->link->link=current;

  printf("\nList before deleting the alternate nodes\n");
  print(head);
  altdel(head);
  printf("\nList after deleting the alternate nodes\n");
  print(head);
  
return 0;

}




