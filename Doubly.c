#include<stdio.h>
#include<stdlib.h>

// Creating An Structure
struct node{
    int data;
    struct node * prev;
    struct node * next;
};

struct node *head;
void InsertB(){


}

int main(){
    int e=0,ch,n;
    head=NULL;
    while(e!=1){
        printf("******************Doubly LinkList*******************");
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
                    InsertB(head,n);






        }
    }
}