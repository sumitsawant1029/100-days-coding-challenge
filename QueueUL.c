#include<stdio.h>
struct node{
    int data;
    struct node * next;
};
struct node *head;
int main(){
    int ch,c=0;
    head=NULL;
    while(c!=1){
        printf("1) Enqueue\n");
        printf("2) Dequeue\n");
        printf("3) Search\n");
        printf("4) Display\n");
        printf("5) Exit\n");
        printf("Enter Your Choice:");
        scanf("%d",&ch)
        switch (ch)
        {
        case 1:Enqueue(head);
            break;
        case 2:Dequeue(head);
            break;
        case 3:Search(head);
            break;
        case 4:Display(head);
            break;
        default: printf("You Entered A Wrong Choice!!!!!\n")
            break;
        }



    }




}