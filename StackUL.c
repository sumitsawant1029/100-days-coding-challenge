// Stack Using Link List

//Name :- Sumit Sawant


#include<stdio.h>
#include<stdlib.h>

struct node{  // Created A Node 
    int data;
    struct node * next;
};
struct node *head;

// Display The Stack
void Display(struct node *head){
	if(head==NULL){
		printf("Stack Is Empty!!!!!\n");
	
	}
	else{
		struct node * ptr=NULL;
		ptr=head;
		printf("Stack Is :\n");
		// Traversing
		while(ptr!=NULL){
			printf("%d\n",ptr->data);
			ptr=ptr->next;
		}
	}
}

// Insert An Element From Top
struct node * Push(struct node * head,int data){
	// Creating  A Temporary Node 
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


// Deleting The Element From Top
struct node * Pop(struct node * head){
	if(head==NULL){
		// Initial Condition
		printf("Stack is Empty\n");
	}
	else
	{
		printf("The Element you Deleted is %d\n",head->data);
		head=head->next;
	}
	return head;
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
    	printf("**********************Stack Using LinkList********************************\n");
        printf("1) Push\n");
        printf("2) Pop\n");
        printf("3) Search\n");
        printf("4) Display\n");
        printf("5) Exit\n");
        printf("Enter Your Choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:printf("Enter The Number:");
        	   scanf("%d",&x);	
				 head=Push(head,x);
            break;
        case 2: head=Pop(head);
            break;
        case 3:
        		printf("Enter the Number Yo Want To Search:");
        		scanf("%d",&x);
				Search(head,x);
            break;
        case 4:Display(head);
            break;
        case 5:printf("Thanks For Using Our Service!!!\n");
				c=1;
        		break;
        default: printf("You Entered A Wrong Choice!!!!!\n");
            break;//
        }
    }
}