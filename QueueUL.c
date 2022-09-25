//Name :- Sumit Sawant
// Queue Using Link List

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};
struct node *head;

void Display(struct node *head){
	if(head==NULL){
		printf("Queue Is Empty!!!!!\n");
	
	}
	else{
		struct node * ptr=NULL;
		ptr=head;
		printf("List Is :\n");
		while(ptr!=NULL){
			printf("%d\n",ptr->data);
			ptr=ptr->next;
		}
	}
}
struct node * Enqueue(struct node * head,int data){
	struct node *temp=(struct node *)malloc(sizeof(struct node));	
	if(head==NULL){
		temp->data=data;
		temp->next=NULL;
		
		head=temp;
	}
	else{
		temp->data=data;
		temp->next=NULL;
		
		temp->next=head;
		
		head=temp;
	}
	printf("Successfull!!!!\n");
	Display(head);
	return head;
}

void Dequeue(struct node * head){
	if(head==NULL){
		printf("Queue is Empty\n");
	}
	else if(head->next==NULL){
		printf("The Element You Deleted Is %d\n",head->data);
		head=NULL;
	}	
	else{
	     struct node *ptr;
	     ptr=head;
	     while(ptr->next->next!=NULL){

			 ptr=ptr->next;
	
		 }
		 printf("The Element You Deleted Is %d\n",ptr->next->data);
		 ptr->next=NULL;
	}
	
}

void Search(struct node * head,int x){
	
	if(head==NULL){
		printf("List Is Empty!!!!!\n");
	}
	else
	{
		struct node * ptr=NULL;
		ptr=head;
		printf("List Is :\n");
		while(ptr!=NULL){
			
			printf("%d",ptr->data);
			if(ptr->data==x){
				printf("<--- Here is your Element!!");
			}
			printf("\n");
			ptr=ptr->next;
		}
		
		
	}
	
	
	
}

int main(){
    int ch,c=0,x;
    head=NULL;
    while(c!=1){
    	printf("**********************Queue Using LinkList********************************\n");
        printf("1) Enqueue\n");
        printf("2) Dequeue\n");
        printf("3) Search\n");
        printf("4) Display\n");
        printf("5) Exit\n");
        printf("Enter Your Choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:printf("Enter The Number:");
        	   scanf("%d",&x);	
				 head=Enqueue(head,x);
            break;
        case 2:Dequeue(head);
            break;
        case 3:
        		printf("Enter the Number Yo Want To Search:");
        		scanf("%d",&x);
				Search(head,x);
            break;
        case 4:Display(head);
            break;
        case 5:c=1;
        	break;
        default: printf("You Entered A Wrong Choice!!!!!\n");
            break;
        }
    }
}