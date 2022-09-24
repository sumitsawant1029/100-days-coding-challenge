#include<stdio.h>
#include<stdlib.h>

// Creating An Structure
struct node{
    int data;
    struct node * prev;
    struct node * next;
};

struct node *head;

void dis(struct node * head){
	struct node * ptr;
	ptr=head;
	printf("The List is :\n");
	while(ptr!=NULL){
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
	
}
struct node * InsertB(struct node *head,int data){
	struct node *temp = (struct node *)malloc(sizeof(struct node));
		if(head==NULL){
		
		temp->data=data;
		temp->next=NULL;
		temp->prev=NULL;
			
		temp->next=head;
		head=temp;
	}
	else{
		
		temp->data=data;
		temp->next=NULL;
		temp->prev=NULL;	
		
		temp->next=head;
		head->prev=temp;
		head=temp;
	}

	return head;
}

struct node * InsertE(struct node* head,int data){
    if(head==NULL){
        head=InsertB(head,data);
    }
    else
    {
        
        struct node * temp,*ptr;
        temp= (struct node *)malloc(sizeof(struct node));
        ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        temp->data=data;
        temp->next=NULL;
        temp->prev=NULL;

        ptr->next=temp;
    }
	dis(head);
	return head;
}




int main(){
    int e=0,ch,n;
    head=NULL;
    while(e!=1){
        printf("\n******************Doubly LinkList*******************\n");
        printf("1) Insert From Beginning\n");
        printf("2) Insert From End\n");
        printf("3) Insert At Position\n");
        printf("4) Delete From Beginning\n");
        printf("5) Delete From End\n");
        printf("6) Delete At Position\n");
        printf("7) Exit\nEnter Your Choice:");
        scanf("%d",&ch);

        switch(ch){
            case 1: printf("Enter The Element :");
                    scanf("%d",&n);
                    head=InsertB(head,n);
                    dis(head);
                    break;    
		   case 2: printf("Enter The Element:");
                    scanf("%d",&n);
                    head=InsertE(head,n);
                    break;
					}
    }
}